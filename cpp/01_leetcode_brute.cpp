#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    int l = nums.size();

    for (int i = 0; i < l; i++) {
      for (int j = 0; j < l; j++) {
        if (i != j) {
          if (nums[i] + nums[j] == target) {
            return {i, j};
          }
        }
      }
    }

    return {};
  }
};

int main() {
  vector<int> nums = {1, 2, 3, 4, 5};
  int target = 9;

  Solution s;
  vector<int> answer = s.twoSum(nums, target);

  cout << answer[0] << " " << answer[1] << endl;

  return 0;
}