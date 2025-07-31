def score(x, y):
    radius = x**2 + y**2
    if radius <= 1:
        return 10
    if 1 < radius <= 25:
        return 5
    if 25 < radius <= 100:
        return 1
    return 0