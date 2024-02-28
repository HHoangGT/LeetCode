//
// Created by Nguyen Huy Hoang on 07/02/2024.
//

#ifndef CPP_PROJECTS_SORTCHARSBYFREQUENCY451_H
#define CPP_PROJECTS_SORTCHARSBYFREQUENCY451_H

#include "../libs/template.h"
#include <algorithm>
#include <unordered_map>
#include <map>

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> char_counts;
        multimap<int, char, greater<int>> sorted_chars; //using to store the frequency in descending order
        string result = "";
        for (const auto &c: s) {
            char_counts[c]++;
        }
        for (const auto c: char_counts) {
            sorted_chars.insert({c.second, c.first});
        }
        for (auto word = sorted_chars.begin(); word != sorted_chars.end(); word++) {
            result += string(word->first, word->second);
        }
        return result;
    }
};


#endif //CPP_PROJECTS_SORTCHARSBYFREQUENCY451_H
