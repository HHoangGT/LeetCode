//
// Created by Nguyen Huy Hoang on 13/4/24.
//

#ifndef C_STRING_INLAB_H
#define C_STRING_INLAB_H

#include <iostream>
#include <cstring>

using namespace std;

// Exercise 1
inline
int find(const char str[], const char substr[]) {
    // TODO
    int strLen = 0, substrLen = 0;
    while (str[strLen] != '\0') {
        strLen++;
    }
    while (substr[substrLen] != '\0') {
        substrLen++;
    }
    if (substrLen > strLen) { return -1; }
    for (int i = 0; i <= strLen - substrLen; i++) {
        int j;
        for (j = 0; j < substrLen; j++) {
            if (str[i + j] != substr[j]) { break; }
        }
        if (j == substrLen) { return i; }
    }
    return -1;
}

// Exercise 2
inline
bool isEqual(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return false;
        }
        str1++;
        str2++;
    }
    return (*str1 == '\0' && *str2 == '\0');
}

inline
void printFirstRepeatedWord(char str[]) {
    // TODO
    const char *delim = " ,.!?:;";
    const char *word = strtok(const_cast<char *>(str), delim);
    int count = 0;
    const char *words[100];

    bool repeated = false;
    while (word != nullptr) {
        repeated = false;
        for (int i = 0; i < count; i++) {
            if (isEqual(words[i], word)) {
                repeated = true;
                break;
            }
        }
        if (repeated) {
            cout << word;
            break;
        } else {
            words[count++] = word;
        }
        word = strtok(nullptr, delim);
    }
    if (!repeated) { cout << "No Repetition"; }
}

// Exercise 3
inline
void process(const char str[], char outstr[]) {
    // TODO
    int start = 0, end = 0, count = 0;
    while (str[end] != '\0') {
        bool flag = false;
        // leave out the space at the beginning
        while (str[start] == ' ') { start++; }
        end = start;
        // find out the end of the current word
        while (str[end] != ' ' && str[end] != '\0') { end++; }
        for (int i = start; i < end; i++) {
            outstr[count++] = str[i];
            flag = true;
        }
        if (flag) { outstr[count++] = ' '; }
        // move to next word
        start = end;
    }
    outstr[count] = '\0';
}

#endif //C_STRING_INLAB_H
