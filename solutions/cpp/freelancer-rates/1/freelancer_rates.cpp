#include <cmath>
template <typename T> double as_percent(T value) {
  return static_cast<double>(value) / 100.0;
}

// daily_rate calculates the daily rate given an hourly rate
// 8 is daily hours
double daily_rate(double hourly_rate) { return hourly_rate * 8; }

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
  return before_discount - before_discount * as_percent(discount);
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
// 8 is daily hours, 22 is monthly days
int monthly_rate(double hourly_rate, double discount) {
  int total = 8 * 22 * hourly_rate;
  return round(total - total * as_percent(discount));
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
  return round(budget / (hourly_rate * 8));
}
