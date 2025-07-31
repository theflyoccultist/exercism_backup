# frozen_string_literal: true

module Acronym
  def self.abbreviate(str)
    words = str.gsub(/-/, ' ').split
    acro = ''
    words.each { |word| acro += word[0] }
    acro.upcase
  end
end
