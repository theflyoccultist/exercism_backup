"""Functions which helps the locomotive engineer to keep track of the train."""


def get_list_of_wagons(*wagons):
    return list(wagons)


def fix_list_of_wagons(each_wagons_id, missing_wagons):
    first, second, one, *rest = each_wagons_id
    return [one, *missing_wagons, *rest, first, second]


def add_missing_stops(routing, **kwargs):
    return {**routing, 'stops': list(kwargs.values())}


def extend_route_information(route, more_route_information):
    return {**route, **more_route_information}


def fix_wagon_depot(wagons_rows):
    return [list(row) for row in zip(*wagons_rows)]