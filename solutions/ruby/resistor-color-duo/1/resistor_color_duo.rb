# frozen_string_literal: true

# Write your code for the 'Resistor Color Duo' exercise in this file. Make the tests in
# `resistor_color_duo_test.rb` pass.
#
# To get started with TDD, see the `README.md` file in your
# `ruby/resistor-color-duo` directory.

module ResistorColorDuo
  RESISTOR_VALUES = %w[
    black brown red orange yellow green blue violet grey white
  ].freeze

  def self.value(input)
    RESISTOR_VALUES.find_index(input[0]) * 10 + RESISTOR_VALUES.find_index(input[1])
  end
end
