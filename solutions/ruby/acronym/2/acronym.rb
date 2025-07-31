# frozen_string_literal: true

module Acronym
  def self.abbreviate(str)
    words = str.gsub(/-/, ' ').split
    words.map { |word| word[0].upcase }.join
  end
end
