def value_of_card(card):
    if card == 'A':
        return 1
    if card in 'JQK':
        return 10
    return int(card)


def higher_card(card_one, card_two):
    v1, v2 = value_of_card(card_one), value_of_card(card_two)
    if v1 > v2:
        return card_one
    elif v2 > v1:
        return card_two
    return card_one, card_two


def value_of_ace(card_one, card_two):
    v1, v2 = value_of_card(card_one), value_of_card(card_two)
    if v1 == 1 or v2 == 1:
        return 1
    elif (v1 + v2 + 11) > 21:
        return 1
    return 11


def is_blackjack(card_one, card_two):
    return (
        (card_one == 'A' and value_of_card(card_two) == 10) or
        (card_two == 'A' and value_of_card(card_one) == 10)
    )


def can_split_pairs(card_one, card_two):
    return (
        value_of_card(card_one) == value_of_card(card_two)
    )


def can_double_down(card_one, card_two):
    return 9 <= (value_of_card(card_one) + value_of_card(card_two)) <= 11