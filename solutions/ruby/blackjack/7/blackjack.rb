# frozen_string_literal: true

module Blackjack
  CARD_VALUES = {
    'ace' => 11,
    'two' => 2,
    'three' => 3,
    'four' => 4,
    'five' => 5,
    'six' => 6,
    'seven' => 7,
    'eight' => 8,
    'nine' => 9,
    'ten' => 10,
    'jack' => 10,
    'queen' => 10,
    'king' => 10
  }

  HIT = 'H'
  STAND = 'S'
  WIN = 'W'
  PAIR = 'P'

  def self.parse_card(card)
    CARD_VALUES.fetch(card, 0)
  end

  def self.card_range(card1, card2)
    value = parse_card(card1) + parse_card(card2)
    case value
    when 12..16 then 'mid'
    when 17..20 then 'high'
    when 21 then 'blackjack'
    when 22 then 'aces'
    else 'low'
    end
  end

  def self.first_turn(card1, card2, dealer_card)
    return PAIR if card1 == card2 && card1 == 'ace'

    dealer_value = parse_card(dealer_card)
    range = card_range(card1, card2)

    case range
    when 'mid' then dealer_value >= 7 ? HIT : STAND
    when 'high' then STAND
    when 'blackjack' then [10, 11].include?(dealer_value) ? STAND : WIN
    else HIT
    end
  end
end
