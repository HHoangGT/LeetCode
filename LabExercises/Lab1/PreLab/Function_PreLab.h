//
// Created by Nguyen Huy Hoang on 6/4/24.
//

#ifndef LEETCODE_FUNCTION_PRELAB_H
#define LEETCODE_FUNCTION_PRELAB_H

#include <iostream>

int calculateFactorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * calculateFactorial(n - 1);
    }
}

void sum2(const int *array, int numEls, int &result) {
    // TODO
    for (int index = 0; index < numEls; index++) {
        result += array[index];
    }
}

bool completeNum(int N) {
    // TODO
    int sum = 0;
    for (int i = 1; i <= N / 2; i++) {
        if (N % i == 0) {
            sum += i;
        }
    }
    return sum == N;
}

#endif //LEETCODE_FUNCTION_PRELAB_H
