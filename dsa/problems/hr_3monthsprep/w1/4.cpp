// todo:
// tests

/***************************************************************************
 *   Given the scores for a season, determine the number of times Maria     *
 *   breaks her records for most and least points scored during the season. *
 *   Game  Score  Minimum  Maximum   Min Max
     0      12     12       12       0   0
     1      24     12       24       0   1
     2      10     10       24       1   1
     3      24     10       24       1   1
 ***************************************************************************/
#include <iostream>
#include <vector>


int main() {
  std::vector<int> scores {10, 5, 20, 20, 4, 5, 2, 25, 1};

  int min = scores[0];
  int max = scores[0];
  int minCounter = 0;
  int maxCounter = 0;

  for (int score : scores) {
    if (score < min) {
      min = score;
      minCounter += 1;
    } else if (score > max) {
      max = score;
      maxCounter += 1;
    }
    std::cout << score << "\t";
    std::cout << min << " " << max << "\t";
    std::cout << minCounter << " " << maxCounter << std::endl;
  }
    return 0;
}