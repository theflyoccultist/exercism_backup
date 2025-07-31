#include <algorithm>
#include <array>
#include <cmath>
#include <iterator>
#include <ostream>
#include <sstream>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
  std::vector<int> truncated_scores;
  for (const auto &score : student_scores)
    truncated_scores.push_back(static_cast<int>(score));
  return truncated_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
  int failed{0};
  for (const auto &score : student_scores)
    if (score <= 40)
      failed++;
  return failed;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
  std::array<int, 4> thresholds;
  thresholds[0] = 41;
  int margin =
      static_cast<int>(std::ceil((highest_score - thresholds[0]) / 4.0));
  for (int i = 1; i <= 4; ++i)
    thresholds[i] = thresholds[i - 1] + margin;
  return thresholds;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string>
student_ranking(std::vector<int> student_scores,
                std::vector<std::string> student_names) {
  std::vector<std::string> organized;
  for (int i = 0; i < student_scores.size(); ++i) {
    std::stringstream ss;
    ss << i + 1 << ". " << student_names[i] << ": " << student_scores[i];
    organized.push_back(ss.str());
  }
  return organized;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
  auto perfect = std::find(student_scores.begin(), student_scores.end(), 100);

  if (perfect == student_scores.end())
    return "";

  auto index = std::distance(student_scores.begin(), perfect);
  return student_names[index];
}
