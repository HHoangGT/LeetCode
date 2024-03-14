//
// Created by Nguyen Huy Hoang on 14/3/24.
//

#ifndef LEETCODE_BINARYSUABARRAYWITHSUM930_H
#define LEETCODE_BINARYSUABARRAYWITHSUM930_H

#include "../libs/template.h"
#include <unordered_map>

class Solution {
public:
    int numSubarraysWithSum(vector<int> &nums, int goal) {
        int n = nums.size();
        unordered_map<int, int> cnt;
        int sum = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            cnt[sum]++;
            sum += nums[i];
            ans += cnt[sum - goal];
        }
        return ans;
    }
};

#endif //LEETCODE_BINARYSUABARRAYWITHSUM930_H
