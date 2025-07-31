"""Functions which helps the locomotive engineer to keep track of the train."""


def get_list_of_wagons(*wagons):
    return list(wagons)


def fix_list_of_wagons(each_wagons_id, missing_wagons):
    first, second, one, *rest = each_wagons_id
    return [one, *missing_wagons, *rest, first, second]


def add_missing_stops(routing, **kwargs):
    stops = []
    for key, value in kwargs.items():
        stops.append(value)
    return {**routing, 'stops': stops}


def extend_route_information(route, more_route_information):
    return {**route, **more_route_information}


def fix_wagon_depot(wagons_rows):
    a, b, c = zip(*wagons_rows)
    return [[a[0], a[1], a[2]], [b[0], b[1], b[2]],[c[0], c[1], c[2]]]