//
// Created by Nguyen Huy Hoang on 06/02/2024.
//

#ifndef CPP_PROJECTS_GROUPSANAGRAMS49_H
#define CPP_PROJECTS_GROUPSANAGRAMS49_H

#include "../libs/template.h"
#include <unordered_map>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
        unordered_map<string, vector<string>> groups;
        vector<vector<string>> result;
        for (const auto &str: strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            groups[sortedStr].push_back(str);
        }
        for (const auto &item: groups) {
            result.emplace_back(item.second);
        }
        return result;
    }
};

#endif //CPP_PROJECTS_GROUPSANAGRAMS49_H
