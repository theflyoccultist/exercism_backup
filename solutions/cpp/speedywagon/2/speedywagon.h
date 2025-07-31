#pragma once

#include <string>
#include <vector>

namespace speedywagon {

struct pillar_men_sensor {
  int activity{};
  std::string location{};
  std::vector<int> data{};
};

bool connection_check(const pillar_men_sensor *pms);

int activity_counter(const pillar_men_sensor *pms, int capacity);

bool alarm_control(const pillar_men_sensor *pms);

int uv_light_heuristic(const std::vector<int> *data_array);

bool uv_alarm(const pillar_men_sensor *pms);
} // namespace speedywagon
