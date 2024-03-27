//
// Created by Nguyen Huy Hoang on 27/3/24.
//

#ifndef LEETCODE_TASK1_H
#define LEETCODE_TASK1_H

#include "../libs/template.h"

int solution(string &S) {
    int n = (int) S.size();
    int count = (S[0] == S[n - 1]);
    // move the first character to the end of the string (n-1) times
    for (int i = 0; i < n - 1; i++) {
        S.push_back(S[0]);
        S.erase(S.begin());
        if (S[0] == S[n - 1]) {
            count++;
        }
    }
    return count;
}


#endif //LEETCODE_TASK1_H
