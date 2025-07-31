"""Functions to automate Conda airlines ticketing system."""
seat_letters = ['A', 'B', 'C', 'D']
seats_in_row = 4


def generate_seat_letters(number):
    i = 0
    while i < number:
        yield seat_letters[i % len(seat_letters)]
        i += 1


def generate_seats(number):
    i = 0
    row = 0

    while i < number:
        if i % seats_in_row == 0:
            row += 1
            if row == 13:
                row += 1
        yield f"{row}{seat_letters[i % len(seat_letters)]}"
        i += 1


def assign_seats(passengers):
    seats = {}
    seat_generator = generate_seats(len(passengers))
    for p in passengers:
        seats[p] = next(seat_generator)
    return seats


def generate_codes(seat_numbers, flight_id):
    i = 0
    code_len = 12
    while i < len(seat_numbers):
        gen_code = f"{seat_numbers[i]}{flight_id}"
        padded_code = gen_code.ljust(code_len, '0')
        yield padded_code
        i += 1
