"""Functions for compiling dishes and ingredients for a catering company."""


from sets_categories_data import (VEGAN,
                                  VEGETARIAN,
                                  KETO,
                                  PALEO,
                                  OMNIVORE,
                                  ALCOHOLS,
                                  SPECIAL_INGREDIENTS)


def clean_ingredients(dish_name, dish_ingredients):
    return (dish_name, set(dish_ingredients))


def check_drinks(drink_name, drink_ingredients):
    if set(drink_ingredients).isdisjoint(ALCOHOLS):
        return f"{drink_name} Mocktail"
    return f"{drink_name} Cocktail"


def categorize_dish(dish_name, dish_ingredients):
    all_ingredients = [
        (VEGAN, "VEGAN"),
        (VEGETARIAN, "VEGETARIAN"),
        (PALEO, "PALEO"),
        (KETO, "KETO"),
        (OMNIVORE, "OMNIVORE")
    ]
    
    for allowed_ingredients, label in all_ingredients:
        if dish_ingredients <= allowed_ingredients:
            return f"{dish_name}: {label}"
            
    return f"{dish_name}: UNKNOWN"


def tag_special_ingredients(dish):
    return(dish[0], set(dish[1]) & SPECIAL_INGREDIENTS)

def compile_ingredients(dishes):
    return set().union(*dishes)


def separate_appetizers(dishes, appetizers):
    return list(set(dishes) - set(appetizers))


def singleton_ingredients(dishes, intersection):
    singleton = (dish - intersection for dish in dishes)
    return set().union(*singleton)