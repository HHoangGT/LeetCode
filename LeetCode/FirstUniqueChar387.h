//
// Created by Nguyen Huy Hoang on 05/02/2024.
//

#ifndef CPP_PROJECTS_FIRSTUNIQUECHAR387_H
#define CPP_PROJECTS_FIRSTUNIQUECHAR387_H

#include "../libs/template.h"

class Solution {
public:
    int firstUniqChar(string s) {
//        vector to store frequency of each character in the string
        vector<int> CharsFreq(26, 0);
        for (auto character: s) {
            CharsFreq[character - 'a'] += 1;
        }
        for (int i = 0; i < s.size(); i++) {
//            return first unique character
            if (CharsFreq[s[i] - 'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};

#endif //CPP_PROJECTS_FIRSTUNIQUECHAR387_H
