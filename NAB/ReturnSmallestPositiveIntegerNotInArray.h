//
// Created by Nguyen Huy Hoang on 25/3/24.
//

#ifndef LEETCODE_RETURNSMALLESTPOSITIVEINTEGERNOTINARRAY_H
#define LEETCODE_RETURNSMALLESTPOSITIVEINTEGERNOTINARRAY_H

#include "../libs/template.h"
#include <vector>

int solution(vector<int> &A) {
    int n = (int) A.size();
    // Put each number in its right place.
    for (int i = 0; i < n; i++) {
        while (A[i] > 0 && A[i] <= n && A[A[i] - 1] != A[i]) {
            swap(A[i], A[A[i] - 1]);
        }
    }
    // Find the first number that is out of place.
    // If all numbers are in place, the smallest missing positive number is n + 1.
    for (int i = 0; i < n; i++) {
        if (A[i] != i + 1) {
            return i + 1;
        }
    }
    // If all numbers are in place, the smallest missing positive number is n + 1.
    return n + 1;
}

int solution2(vector<int> &A) {
    int n = (int) A.size();
    // Mark the presence of elements using a boolean array.
    vector<bool> present(n + 1, false);
    // Mark the elements that are within the range [1, n].
    // We ignore the elements that are out of the range [1, n] because the missing positive integer will be in the range [1, n + 1].
    for (int i = 0; i < n; i++) {
        if (A[i] > 0 && A[i] <= n) {
            present[A[i]] = true;
        }
    }
    // Find the first element that is not present in the array.
    // If all elements are present in the array, the smallest missing positive integer is n + 1.
    for (int i = 1; i <= n; i++) {
        if (!present[i]) {
            return i;
        }
    }
    return n + 1;
}

#endif //LEETCODE_RETURNSMALLESTPOSITIVEINTEGERNOTINARRAY_H
