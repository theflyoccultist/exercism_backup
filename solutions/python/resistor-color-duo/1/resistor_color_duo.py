all_colors = ['black', 'brown', 'red', 'orange', 'yellow', 'green', 'blue', 'violet', 'grey', 'white']

def value(colors):
    my_list = [all_colors.index(colors[0]), all_colors.index(colors[1])]
    return int(''.join(map(str, my_list)))