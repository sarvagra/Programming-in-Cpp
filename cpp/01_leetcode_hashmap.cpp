#include <climits>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> search(vector<int> nums, int target) {
  unordered_map<int, int> seen;
  int l = nums.size();
  int comp = 0;
  for (int i = 0; i < l; i++) {
    comp = target - nums[i];
    if (seen.find(comp) != seen.end()) {
      return {seen[comp], i};
    }
    seen.emplace(nums[i], i);
  }
  return {};
}

int main() {
  vector<int> f = search({1, 2, 3, 4, 5, 6}, 6);
  cout << f[0] << " " << f[1];
}