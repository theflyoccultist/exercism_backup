#include "lasagna_master.h"
#include <algorithm>
#include <vector>

namespace lasagna_master {

int preparationTime(const std::vector<std::string> &layers, int avgTime) {
  return layers.size() * avgTime;
};

amount quantities(const std::vector<std::string> &layers) {
  amount result{0, 0.0};
  for (const auto &i : layers) {
    if (i == "noodles") {
      result.noodles += 50;
    } else if (i == "sauce") {
      result.sauce += 0.2;
    }
  }
  return result;
};

void addSecretIngredient(std::vector<std::string> &myList,
                         const std::vector<std::string> &friendsList) {
  myList.back() = friendsList.back();
};

void addSecretIngredient(std::vector<std::string> &myList,
                         const std::string &auntiesSecret) {
  myList.back() = auntiesSecret;
};

std::vector<double> scaleRecipe(std::vector<double> quantities, int portions) {
  std::transform(quantities.begin(), quantities.end(), quantities.begin(),
                 [portions](double a) { return a * (portions / 2.0); });
  return quantities;
};

} // namespace lasagna_master
