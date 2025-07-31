# frozen_string_literal: true

module ResistorColorDuo
  RESISTOR_VALUES = %w[
    black brown red orange yellow green blue violet grey white
  ].freeze

  def self.value(input)
    input.first(2).map { |x| RESISTOR_VALUES.index(x) }.join.to_i
  end
end
