#include "libs/template.h"
#include "LeetCode/TrappingRainWater42.h"

using namespace std;

int main() {
    Solution s;
    vector<int> heights = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << s.trap(heights) << endl;
    return 0;
}
