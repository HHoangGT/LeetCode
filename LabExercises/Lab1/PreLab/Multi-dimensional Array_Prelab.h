#include <iostream>
#include <climits>
#include <string>
#include <vector>

using namespace std;

int findMaxColumn(int arr[][1000], int row, int col) {
    int maxCol = 0;
    int max = INT_MIN;
    for (int i = 0; i < col; i++) {
        int sum = 0;
        for (int j = 0; j < row; j++) {
            sum += arr[j][i];
        }
        if (sum > max) {
            maxCol = i;
            max = sum;
        }
    }
    return maxCol;
}

int diagonalProduct(int arr[][1000], int row, int col) {
    int product = 1;
    for (int i = 0; i < row; i++) {
        product *= arr[i][i];
    }
    return product;
}

bool isSymmetric(int arr[][1000], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] != arr[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int diagonalDiff(int arr[][1000], int row, int col, int x, int y) {
    int sum1 = 0, sum2 = 0;
    int xTemp = x, yTemp = y;
    vector<int> leftDiagonal, rightDiagonal;
    while (xTemp < row && yTemp < col) {
        leftDiagonal.push_back(arr[xTemp][yTemp]);
        xTemp++;
        yTemp++;
    }
    xTemp = x;
    yTemp = y;
    while (xTemp >= 0 && yTemp >= 0) {
        leftDiagonal.push_back(arr[xTemp][yTemp]);
        xTemp--;
        yTemp--;
    }
    xTemp = x;
    yTemp = y;
    while (xTemp >= 0 && yTemp < col) {
        rightDiagonal.push_back(arr[xTemp][yTemp]);
        xTemp--;
        yTemp++;
    }
    xTemp = x;
    yTemp = y;
    while (xTemp < row && yTemp >= 0) {
        rightDiagonal.push_back(arr[xTemp][yTemp]);
        xTemp++;
        yTemp--;
    }
    for (int i: leftDiagonal) {
        sum1 += i;
    }
    for (int i: rightDiagonal) {
        sum2 += i;
    }
    return abs(sum1 - sum2);
}