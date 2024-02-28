//
// Created by hoang on 2/2/2024.
//

#ifndef CPP_PROJECTS_DIVIDEARRAYINTOARRAYS2966_H
#define CPP_PROJECTS_DIVIDEARRAYINTOARRAYS2966_H

#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> divideArray(vector<int> &nums, int k) {
        vector<vector<int>> result(nums.size() / 3, vector<int>(3));
        sort(nums.begin(), nums.end());
        auto resultIndex = 0;
        for (int i = 0; i < nums.size(); i += 3) {
            if (i + 2 < nums.size() && nums[i + 2] - nums[i] <= k) {
                result[resultIndex] = {nums[i], nums[i + 1], nums[i + 2]};
                resultIndex += 1;
            } else {
                return vector<vector<int>>();
            }
        }
        return result;
    }
};

#endif // CPP_PROJECTS_DIVIDEARRAYINTOARRAYS2966_H
