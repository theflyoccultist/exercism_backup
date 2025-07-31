#include "power_of_troy.h"
#include <memory>
#include <utility>

namespace troy {

void give_new_artifact(human &Human, const std::string name) {
  Human.possession = std::make_unique<artifact>(name);
};

void exchange_artifacts(std::unique_ptr<artifact> &item1,
                        std::unique_ptr<artifact> &item2) {
  std::swap(item1, item2);
};

void manifest_power(human &Human, const std::string effect) {
  Human.own_power = std::make_shared<power>(effect);
};

void use_power(human &caster, human &target) {
  target.influenced_by = caster.own_power;
};

int power_intensity(human &caster) { return caster.own_power.use_count(); };
} // namespace troy
