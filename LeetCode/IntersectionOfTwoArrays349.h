//
// Created by Nguyen Huy Hoang on 10/03/2024.
//

#ifndef LEETCODE_INTERSECTIONOFTWOARRAYS349_H
#define LEETCODE_INTERSECTIONOFTWOARRAYS349_H

#include "../libs/template.h"
#include <unordered_set>

class Solution {
public:
    static vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        vector<int> result;
        for (int num: set1) {
            if (set2.count(num)) {
                result.push_back(num);
            }
        }
        return result;
    }
};

#endif //LEETCODE_INTERSECTIONOFTWOARRAYS349_H
