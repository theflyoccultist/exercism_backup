all_colors = ['black', 'brown', 'red', 'orange', 'yellow', 'green', 'blue', 'violet', 'grey', 'white']

def label(colors):
    if len(colors) < 3:
        raise ValueError('At least three color bands are required')
    if any(c not in all_colors for c in colors[:3]):
        raise ValueError('Invalid color in input')
        
    first_three = [all_colors.index(c) for c in colors[:3]]
    resistor = (first_three[0] * 10 + first_three[1]) * 10 ** first_three[2]

    units = [(1_000_000_000, 'gigaohms'),
             (1_000_000, 'megaohms'),
             (1_000, 'kiloohms'),
             (1, 'ohms')]

    for factor, name in units:
        if resistor >= factor:
            return f'{resistor // factor} {name}'
    return '0 ohms'