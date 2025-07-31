"""Functions to help Azara and Rui locate pirate treasure."""


def get_coordinate(record):
    return record[-1]


def convert_coordinate(coordinate):
    return tuple([coordinate[0:1], coordinate[1:2]])


def compare_records(azara_record, rui_record):
    new_azara = convert_coordinate(azara_record[1])
    return new_azara == rui_record[1]


def create_record(azara_record, rui_record):
    if compare_records(azara_record, rui_record):
        return azara_record + rui_record
    return 'not a match'


def clean_up(combined_record_group):
    res = []
    for record in combined_record_group:
        if isinstance(record, tuple):
            cleaned = (record[0], record[2], record[3], record[4])
            res.append(str(cleaned))
    return '\n'.join(res) + '\n'