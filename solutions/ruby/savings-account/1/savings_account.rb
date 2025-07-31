# frozen_string_literal: true

# PwatPwat
module SavingsAccount
  def self.interest_rate(balance)
    if balance.negative?
      3.213
    elsif balance < 1000
      0.5
    elsif balance < 5000
      1.621
    else
      2.475
    end
  end

  def self.annual_balance_update(balance)
    balance + balance / 100 * interest_rate(balance)
  end

  def self.years_before_desired_balance(current_balance, desired_balance)
    counter = 0
    while current_balance < desired_balance
      current_balance = annual_balance_update(current_balance)
      counter += 1
    end
    counter
  end
end
