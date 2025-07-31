class Calculator 
  def add (num1, num2)
    return num1 + num2
  end
  
  def subtract(num1, num2)
    return num1 - num2
  end
  
  def multiply(num1, num2)
    return num1 * num2 
  end
end

class Lasagna
  
  Lasagna::EXPECTED_MINUTES_IN_OVEN = 40

  def remaining_minutes_in_oven(actual_minutes_in_oven)
    calc = Calculator.new
    calc.subtract(EXPECTED_MINUTES_IN_OVEN, actual_minutes_in_oven)
    raise 'Please implement the Lasagna#remaining_minutes_in_oven method'
  end

  def preparation_time_in_minutes(layers)
    calc = Calculator.new
    calc.multiply(layers, preparation_time_in_minutes)
    raise 'Please implement the Lasagna#preparation_time_in_minutes method'
  end

  def total_time_in_minutes(number_of_layers:, actual_minutes_in_oven:)
    calc = Calculator.new
    calc.add(preparation_time_in_minutes, actual_minutes_in_oven)
    raise 'Please implement the Lasagna#total_time_in_minutes method'
  end
end
