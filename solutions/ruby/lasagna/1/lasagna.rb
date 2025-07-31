class Lasagna
  
  Lasagna::EXPECTED_MINUTES_IN_OVEN = 40

  def remaining_minutes_in_oven(actual_minutes_in_oven)
    EXPECTED_MINUTES_IN_OVEN.subtract(actual_minutes_in_oven)
    raise 'Please implement the Lasagna#remaining_minutes_in_oven method'
  end

  def preparation_time_in_minutes(layers)
    layers.multiply(preparation_time_in_minutes)
    raise 'Please implement the Lasagna#preparation_time_in_minutes method'
  end

  def total_time_in_minutes(number_of_layers:, actual_minutes_in_oven:)
    preparation_time_in_minutes.add(actual_minutes_in_oven)
    raise 'Please implement the Lasagna#total_time_in_minutes method'
  end
end
