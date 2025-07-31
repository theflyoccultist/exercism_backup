all_colors = ['black', 'brown', 'red', 'orange', 'yellow', 'green', 'blue', 'violet', 'grey', 'white']

def label(colors):
    first_two = [all_colors.index(c) for c in colors[:3]]
    resistor = (first_two[0] * 10 + first_two[1]) * 10 ** first_two[2]

    if resistor // 1000 == 0:
        return f'{resistor} ohms'
    elif resistor // 1_000_000 == 0:
        return f'{resistor // 1000} kiloohms'
    elif resistor // 1_000_000_000 == 0:
        return f'{resistor // 1_000_000} megaohms'
    elif resistor // 1_000_000_000_000 == 0:
        return f'{resistor // 1_000_000_000} gigaohms'
    raise Exception('value is too large')