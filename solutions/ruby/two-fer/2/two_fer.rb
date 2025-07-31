# frozen_string_literal: true

module TwoFer
  def self.two_fer(name = 'you')
    format('One for %s, one for me.', name)
  end
end
