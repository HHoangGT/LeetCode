//
// Created by Nguyen Huy Hoang on 02/02/2024.
//

#ifndef CPP_PROJECTS_SEQUENTIALDIGITS1291_H
#define CPP_PROJECTS_SEQUENTIALDIGITS1291_H

#include <algorithm>
#include "../libs/template.h"

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> result;
        for (int i = 1; i < 9; i++) {
            int num = i;
            int nextDigit = i + 1;
            while (num <= high && nextDigit <= 9) {
                num = num * 10 + nextDigit;
                if (low <= num && num <= high) {
                    result.emplace_back(num);
                }
                nextDigit++;
            }
        }
        sort(result.begin(), result.end());
        return result;
    }
};

#endif //CPP_PROJECTS_SEQUENTIALDIGITS1291_H
