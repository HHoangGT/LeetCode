//
// Created by Nguyen Huy Hoang on 6/4/24.
//

#ifndef LEETCODE_FILE_IO_PRELAB_H
#define LEETCODE_FILE_IO_PRELAB_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void calSum(const string &fileName) {
    ifstream file(fileName);
    int sum = 0;
    int num;
    while (file >> num) {
        sum += num;
    }
    cout << sum;
}

#endif //LEETCODE_FILE_IO_PRELAB_H
