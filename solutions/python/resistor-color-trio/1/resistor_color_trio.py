all_colors = ['black', 'brown', 'red', 'orange', 'yellow', 'green', 'blue', 'violet', 'grey', 'white']

def label(colors):
    first_two = [all_colors.index(c) for c in colors[:3]]
    resistor = first_two[0] * 10 + first_two[1]
    
    match first_two[2]:
        case 1:
            return f'{resistor * 10} ohms'
        case 2:
            return f'{int(resistor / 10)} kiloohms'
        case 3:
            return f'{resistor} kiloohms'
        case 4:
            return f'{resistor * 10} kiloohms'
        case 6:
            return f'{resistor} megaohms'
        case 9:
            return f'{resistor} gigaohms'
        case _:
            return f'{resistor} ohms'