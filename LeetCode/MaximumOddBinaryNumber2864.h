//
// Created by Nguyen Huy Hoang on 01/03/2024.
//

#ifndef LEETCODE_MAXIMUMODDBINARYNUMBER2864_H
#define LEETCODE_MAXIMUMODDBINARYNUMBER2864_H

#include "../libs/template.h"

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.rbegin(), s.rend());
        for (int i = static_cast<int>(s.size()) - 1; i >= 0; i--)
            if (s[i] == '1')
                swap(s[i], s[s.size() - 1]);
        return s;
    }
};

#endif //LEETCODE_MAXIMUMODDBINARYNUMBER2864_H
