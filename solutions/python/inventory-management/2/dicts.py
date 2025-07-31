"""Functions to keep track and alter inventory."""
from collections import Counter

def create_inventory(items):
    return dict(Counter(items))

def add_items(inventory, items):
    for item in items:
        if item in inventory:
            inventory[item] += 1
        else:
            inventory[item] = 1
    return inventory


def decrement_items(inventory, items):
    for item in items:
        if item in inventory:
            inventory[item] -= 1
            if inventory[item] <= 0:
                inventory[item] = 0
    return inventory


def remove_item(inventory, item):
    if item in inventory:
        del inventory[item]
    return inventory


def list_inventory(inventory):
    for item in list(inventory):
        if inventory[item] == 0:
            del inventory[item]
    return list(inventory.items())