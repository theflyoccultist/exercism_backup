class AssemblyLine
  def initialize(speed)
    @speed = speed
  end

  def production_rate_per_hour
    if @speed <= 4
      221.0 * @speed
    elsif @speed >= 5 && @speed <= 8
      221 * @speed * 0.9
    elsif @speed == 9
      221 * @speed * 0.8
    else
      221 * @speed * 0.77
    end
  end

  def working_items_per_minute
  (production_rate_per_hour / 60).floor
  end
end
