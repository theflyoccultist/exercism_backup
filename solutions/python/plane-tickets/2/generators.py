"""Functions to automate Conda airlines ticketing system."""
seat_letters = ['A', 'B', 'C', 'D']
seats_in_row = 4


def generate_seat_letters(number):
    for seat in range(number):
        yield seat_letters[seat % seats_in_row]


def generate_seats(number):
    i = 0
    row = 0
    seat_letters = generate_seat_letters(number)

    while i < number:
        if i % seats_in_row == 0:
            row += 1
            if row == 13:
                row += 1
        yield f"{row}{next(seat_letters)}"
        i += 1


def assign_seats(passengers):
    seats = {}
    seat_generator = generate_seats(len(passengers))
    for p in passengers:
        seats[p] = next(seat_generator)
    return seats


def generate_codes(seat_numbers, flight_id):
    code_len = 12
    for seat_number in seat_numbers:
        gen_code = f"{seat_number}{flight_id}"
        padded_code = gen_code.ljust(code_len, '0')
        yield padded_code
