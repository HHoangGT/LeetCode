//
// Created by Nguyen Huy Hoang on 05/03/2024.
//

#ifndef LEETCODE_MINIMUNLENGTHOFSTRING1750_H
#define LEETCODE_MINIMUNLENGTHOFSTRING1750_H

#include "../libs/template.h"

class Solution {
public:
    static int minimumLength(string s) {
        int first = 0, last = static_cast<int>(s.size()) - 1;
        while (first < last) {
            if (s[first] != s[last]) return last - first + 1;
            while (first < last && s[first] == s[first + 1]) first++;
            while (first < last && s[last] == s[last - 1]) last--;
            first++;
            last--;
        }
        return first - last >= 2 ? 0 : last - first + 1;
    }
};

#endif //LEETCODE_MINIMUNLENGTHOFSTRING1750_H
