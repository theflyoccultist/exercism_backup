#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
bool connection_check(const pillar_men_sensor *pms) { return pms != nullptr; }

int activity_counter(const pillar_men_sensor *pms, int capacity) {
  int tot{0};
  for (int i = 0; i < capacity; ++i) {
    tot += pms[i].activity;
  }
  return tot;
};

bool alarm_control(const pillar_men_sensor *pms) {
  return pms && pms->activity;
};

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(const std::vector<int> *data_array) {
  double avg{};
  for (auto element : *data_array) {
    avg += element;
  }
  avg /= data_array->size();
  int uv_index{};
  for (auto element : *data_array) {
    if (element > avg)
      ++uv_index;
  }
  return uv_index;
}

bool uv_alarm(const pillar_men_sensor *pms) {
  return connection_check(pms) &&
         uv_light_heuristic(&pms->data) > pms->activity;
}
} // namespace speedywagon
