//
// Created by Nguyen Huy Hoang on 13/4/24.
//

#ifndef MULTI_DIMENSIONAL_ARRAY_INLAB_H
#define MULTI_DIMENSIONAL_ARRAY_INLAB_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Exercise 1
inline
int ascendingRows(int arr[][1000], const int row, const int col) {
    int count = 0;
    for (int i = 0; i < row; i++) {
        bool isAscending = true;
        for (int j = 0; j < col; j++) {
            for (int k = j + 1; k < col; k++) {
                if (arr[i][j] > arr[i][k]) {
                    isAscending = false;
                    break;
                }
            }
        }
        if (isAscending) { count++; }
    }
    return count;
}

// Exercise 2
inline
bool isPrime(int n) {
    if (n <= 1) { return false; }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) { return false; }
    }
    return true;
}

inline
int primeColumns(int arr[][1000], int row, int col) {
    int count = 0;
    for (int j = 0; j < col; j++) {
        int colTotal = 0;
        for (int i = 0; i < row; i++) {
            colTotal += arr[i][j];
        }
        if (isPrime(colTotal)) { count++; }
    }
    return count;
}

#endif //MULTI_DIMENSIONAL_ARRAY_INLAB_H
