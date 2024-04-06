#include <iostream>
#include <cstring>

using namespace std;

void reverse(char str[]) {
    // TODO
    int len = (int) strlen(str);
    // Swap the first half of the string with the second half
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void recover(char signal[]) {
    // TODO
    for (int i = 0; i < (int) strlen(signal); i++) {
        if (65 <= signal[i] && signal[i] <= 90) {
            signal[i] = signal[i] + 32;
        } else if (97 <= signal[i] && signal[i] <= 122) {
            signal[i] = signal[i] - 32;
        } else {
            continue;
        }
    }
}