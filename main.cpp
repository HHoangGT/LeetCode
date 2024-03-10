#include "libs/template.h"
#include "LeetCode/IntersectionOfTwoArrays349.h"

using namespace std;

int main() {
    string inp = "cabaabac";
    // the correct output is 0
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    for (auto num: Solution::intersection(nums1, nums2)) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}