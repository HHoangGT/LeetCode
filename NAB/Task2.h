//
// Created by Nguyen Huy Hoang on 27/3/24.
//

#ifndef LEETCODE_TASK2_H
#define LEETCODE_TASK2_H

#include "../libs/template.h"

int solution(string &S) {
    // String contains only 'A' or 'B'. Delete some letters to obtain the format "A...AB...B".
    // find the first A and the last B.
    int n = (int) S.size();
    int countA = 0, countB = 0;
    int deletion = 0;
    for (int i = 0; i < n; i++) {
        if (S[i] == 'A') {
            if (countB > 0) {
                deletion++;
                continue;
            }
            countA++;
        } else {
            if (countA == 0) {
                deletion++;
                continue;
            } else {
                if (S[i + 1] == 'A') {
                    deletion++;
                    continue;
                }
            }
            countB++;
        }

    }
    return deletion;
}

#endif //LEETCODE_TASK2_H
