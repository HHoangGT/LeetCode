//
// Created by hoang on 2/13/2024.
//

#ifndef CPP_PROJECTS_MAJORITYELEMENT169_H
#define CPP_PROJECTS_MAJORITYELEMENT169_H

#include "../libs/template.h"
#include <unordered_map>

class Solution {
public:
    int majorityElement(vector<int> &nums) {
        unordered_map<int, int> hashMap;
        int result = 0;
        int majority = 0;
        for (int index: nums) {
            hashMap[index] += 1;
            if (hashMap[index] > majority) {
                result = index;
                majority = hashMap[index];
            }
        }
        return result;
    }
};

#endif //CPP_PROJECTS_MAJORITYELEMENT169_H
