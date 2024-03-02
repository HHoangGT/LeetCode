//
// Created by hoang on 3/2/2024.
//

#ifndef LEETCODE_SQUAREOFSORTEDARRAY977_H
#define LEETCODE_SQUAREOFSORTEDARRAY977_H

#include "../libs/template.h"

class Solution {
private:
    // Function to quick sort the array
    vector<int> quickSort(vector<int> &array) {
        if (array.size() < 2) return array;
        int pivot = array[0];
        vector<int> less;
        vector<int> greater;
        for (int i = 1; i < array.size(); i++) {
            if (array[i] <= pivot) {
                less.push_back(array[i]);
            } else {
                greater.push_back(array[i]);
            }
        }
        vector<int> res = quickSort(less);
        res.push_back(pivot);
        vector<int> res2 = quickSort(greater);
        res.insert(res.end(), res2.begin(), res2.end());
        return res;
    }

public:
    vector<int> sortedSquares(vector<int> &nums) {
        vector<int> res;
        res.reserve(nums.size());
        for (int num: nums)
            res.push_back(num * num);
        res = quickSort(res);
        return res;
    }
};

#endif //LEETCODE_SQUAREOFSORTEDARRAY977_H
