#include "libs/template.h"
#include "LeetCode/BinarySuabarrayWithSum930.h"

using namespace std;

int main() {
    Solution s;
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;
    cout << s.numSubarraysWithSum(nums, goal) << endl;
    return 0;
}