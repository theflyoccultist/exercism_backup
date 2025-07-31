def validate(sides):
    if (sides[0] + sides[1] + sides[2]) > 0:
        return (sides[0] + sides[1] >= sides[2]) and (sides[1] + sides[2] >= sides[0]) and (sides[0] + sides[2] >= sides[1])
    return False


def equilateral(sides):
    if validate(sides):
        return sides[0] == sides[1] == sides[2]
    return False


def isosceles(sides):
    if validate(sides):
        return sides[0] == sides[1] or sides[1] == sides[2] or sides[2] == sides[0]
    return False
    

def scalene(sides):
    if equilateral(sides) or isosceles(sides):
        return False
    return validate(sides)
