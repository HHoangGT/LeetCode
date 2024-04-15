//
// Created by Nguyen Huy Hoang on 13/4/24.
//

#ifndef FUNCTION_INLAB_H
#define FUNCTION_INLAB_H

#include <iostream>

using namespace std;

// Exercise 1
inline
int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

inline
bool isPalindrome(const char *str) {
    // Write your code here
    const int len = stringLength(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) { return false; }
    }
    return true;
}

// Exercise 2
inline
bool isPrime(const int n) {
    if (n <= 1) { return false; }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) { return false; }
    }
    return true;
}

inline
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

inline
bool isSpecialNumber(int n) {
    // Write your code
    return isPrime(n) && isPrime(sumOfDigits(n));
}

// Exercise 3

inline
void encrypt(char *text, int shift) {
    // Write your code
    int counter = 0;
    while (text[counter] != '\0') {
        if (isalpha(text[counter])) {
            const char base = islower(text[counter]) ? 'a' : 'A';
            int temp = (static_cast<int>(text[counter]) - base + shift) % 26 + base;
            if (base == 'a') {
                if (temp < 97) { temp = 123 - (97 - temp); } else if (temp > 122) { temp = 96 + (temp - 122); }
            } else {
                if (temp < 65) { temp = 91 - (65 - temp); } else if (temp > 90) { temp = 64 + (temp - 90); }
            }
            text[counter++] = static_cast<char>(temp);
        }
    }
}

inline
void decrypt(char *text, int shift) {
    // Write your code
    encrypt(text, 26 - shift);
}

// Exercise 4
inline
void swap(int *a, int *b) {
    const int temp = *a;
    *a = *b;
    *b = temp;
}

inline
int partition(int *arr, int low, int high) {
    const int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

inline
void quickSort(int *arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

inline
bool checkElementsUniqueness(int *arr, int n) {
    // Write your code
    quickSort(arr, 0, n - 1);
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) { return false; }
    }
    return true;
}

#endif //FUNCTION_INLAB_H
