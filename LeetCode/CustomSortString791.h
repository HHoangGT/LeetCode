//
// Created by Nguyen Huy Hoang on 11/03/2024.
//

#ifndef LEETCODE_CUSTOMSORTSTRING791_H
#define LEETCODE_CUSTOMSORTSTRING791_H

#include "../libs/template.h"

class Solution {
public:
    string customSortString(string order, string s) {
        // count the frequency of each character
        vector<int> count(26, 0);
        for (char c: s) {
            count[c - 'a']++;
        }
        // re-construct the string
        string res;
        // add characters in order
        for (char c: order) {
            while (count[c - 'a']-- > 0) {
                res += c;
            }
        }
        // add remaining characters
        for (int i = 0; i < 26; i++) {
            while (count[i]-- > 0) {
                res += i + 'a';
            }
        }
        // return the result
        return res;
    }
};

#endif //LEETCODE_CUSTOMSORTSTRING791_H
