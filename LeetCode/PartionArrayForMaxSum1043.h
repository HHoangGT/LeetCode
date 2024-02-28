//
// Created by Nguyen Huy Hoang on 05/02/2024.
//

#ifndef CPP_PROJECTS_PARTIONARRAYFORMAXSUM1043_H
#define CPP_PROJECTS_PARTIONARRAYFORMAXSUM1043_H

#include "../libs/template.h"

class Solution {
public:
    int maxSumAfterPartitioning(vector<int> &arr, int k) {
        int n = arr.size();
        vector<int> dp(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            int maximum = 0;
            int maxSum = 0;
            for (int j = 1; j <= k && i - j >= 0; j++) {
                maximum = max(maximum, arr[i - j]);
                maxSum = max(maxSum, dp[i - j] + maximum * j);
            }
            dp[i] = maxSum;
        }

        return dp[n];
    }
};

#endif //CPP_PROJECTS_PARTIONARRAYFORMAXSUM1043_H
