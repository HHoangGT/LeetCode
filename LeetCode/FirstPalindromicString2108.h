//
// Created by Nguyen Huy Hoang on 14/02/2024.
//

#ifndef CPP_PROJECTS_FIRSTPALINDROMICSTRING2108_H
#define CPP_PROJECTS_FIRSTPALINDROMICSTRING2108_H

#include "../libs/template.h"
#include <algorithm>

class Solution {
public:
    string firstPalindrome(vector<string> &words) {
        for (auto word: words) {
            string orgWord = word;
            reverse(word.begin(), word.end());
            if (orgWord == word) {
                return orgWord;
            }
        }
        return "";
    }
};

#endif //CPP_PROJECTS_FIRSTPALINDROMICSTRING2108_H
