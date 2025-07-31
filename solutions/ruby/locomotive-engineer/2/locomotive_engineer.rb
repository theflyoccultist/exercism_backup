# frozen_string_literal: true

class LocomotiveEngineer
  def self.generate_list_of_wagons(*wagons)
    wagons
  end

  def self.fix_list_of_wagons(each_wagons_id, missing_wagons)
    first, second, one, *rest = each_wagons_id
    [one, *missing_wagons, *rest, first, second]
  end

  def self.add_missing_stops(from_to = {}, stops = {})
    x, y = from_to.values_at(:from, :to)
    { from: x, to: y, stops: stops&.values || [] }
  end

  def self.extend_route_information(route, more_route_information)
    route.merge!(more_route_information)
  end
end
