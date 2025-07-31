"""Functions to manage a users shopping cart items."""


def add_item(current_cart, items_to_add):
    for item in items_to_add:
        if item in current_cart:
            current_cart[item] += 1
        else:
            current_cart[item] = 1
    return current_cart


def read_notes(notes):
    return dict.fromkeys(notes, 1)


def update_recipes(ideas, recipe_updates):
    ideas.update(recipe_updates)
    return ideas


def sort_entries(cart):
    return dict(sorted(cart.items()))


def send_to_store(cart, aisle_mapping):
    new_dict = {}
    for item in reversed(sorted(cart)):
        quantity = cart[item]
        aisle_info = aisle_mapping[item]
        new_dict[item] = [quantity] + aisle_info
    return new_dict


def update_store_inventory(fulfillment_cart, store_inventory):
    for item_name, store_info in store_inventory.items():
        if item_name in fulfillment_cart:
            cart_info = fulfillment_cart[item_name]
            
            updated_store_qty = store_info[0] - cart_info[0]

            if updated_store_qty == 0:
                updated_store_qty = 'Out of Stock'
            store_info[0] = updated_store_qty
            
    return store_inventory