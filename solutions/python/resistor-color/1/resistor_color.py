def color_code(color):
    global all_colors
    all_colors = {
        'black': 0,
        'brown': 1,
        'red': 2,
        'orange': 3,
        'yellow': 4,
        'green': 5,
        'blue': 6,
        'violet': 7,
        'grey': 8,
        'white': 9
    }
    return all_colors.get(color)

def colors():
    global all_colors
    return list(all_colors)