# frozen_string_literal: true

class Clock
  attr_reader :hour, :minute

  def initialize(hour: 0, minute: 0)
    total_minutes = (hour * 60 + minute) % (24 * 60)
    total_minutes += 24 * 60 if total_minutes.negative?
    @hour = total_minutes / 60
    @minute = total_minutes % 60
  end

  def +(other)
    Clock.new(hour: @hour + other.hour, minute: @minute + other.minute)
  end

  def -(other)
    Clock.new(hour: @hour - other.hour, minute: @minute - other.minute)
  end

  def ==(other)
    other.is_a?(Clock) && @hour == other.hour && @minute == other.minute
  end

  def to_s
    format('%02d:%02d', @hour, @minute)
  end
end
