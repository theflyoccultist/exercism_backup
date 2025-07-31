# frozen_string_literal: true

class BirdCount
  def self.last_week
    [0, 2, 5, 3, 7, 8, 4]
  end

  def initialize(birds_per_day)
    @birds_per_day = birds_per_day
  end

  def yesterday
    hier = @birds_per_day.size - 2
    @birds_per_day[hier]
  end

  def total
    @birds_per_day.sum
  end

  def busy_days
    counter = 0
    @birds_per_day.each do |day|
      counter += 1 if day > 4
    end
    counter
  end

  def day_without_birds?
    @birds_per_day.include? 0
  end
end
