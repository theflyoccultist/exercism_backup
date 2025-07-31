all_colors = ['black', 'brown', 'red', 'orange', 'yellow', 'green', 'blue', 'violet', 'grey', 'white']

def value(colors):
    first_two = [all_colors.index(c) for c in colors[:2]]
    return first_two[0] * 10 + first_two[1]