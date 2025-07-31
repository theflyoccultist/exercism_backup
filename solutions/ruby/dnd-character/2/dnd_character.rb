# frozen_string_literal: true

class DndCharacter
  ATTRS = %i[strength dexterity constitution intelligence wisdom charisma].freeze
  BASE_HITPOINTS = 10
  attr_reader(*ATTRS)

  def self.modifier(constitution)
    ((constitution - 10) / 2).floor
  end

  def initialize
    ATTRS.each { |attr| instance_variable_set("@#{attr}", dice_throw) }
  end

  def hitpoints
    BASE_HITPOINTS + self.class.modifier(constitution)
  end

  private

  def dice_throw
    dices = []
    4.times { dices << rand(1..6) }
    dices.max(3).sum
  end
end
