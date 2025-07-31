#include <string>
#include <vector>

namespace election {

struct ElectionResult {
  // Name of the candidate
  std::string name{};
  // Number of votes the candidate has
  int votes{};
};

int vote_count(ElectionResult &el) { return el.votes; }

void increment_vote_count(ElectionResult &el, int incr) { el.votes += incr; }

ElectionResult &determine_result(std::vector<ElectionResult> &fc) {
  int max{0};
  int index{0};
  for (auto i{0}; i < fc.size(); i++) {
    if (fc[i].votes > max) {
      max = fc[i].votes;
      index = i;
    }
  }
  fc[index].name = "President " + fc[index].name;
  return fc[index];
};

} // namespace election
