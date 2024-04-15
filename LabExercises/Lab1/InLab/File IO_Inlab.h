//
// Created by Nguyen Huy Hoang on 13/4/24.
//

#ifndef FILE_IO_INLAB_H
#define FILE_IO_INLAB_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Exercise 1
inline
void uppercase(const string &output) {
    // TODO
    string input;
    getline(cin, input);

    for (char &c: input) {
        if (islower(c)) { c = toupper(c); }
    }

    // write to output files
    ofstream outFile(output);
    if (outFile.is_open()) {
        outFile << input;
        outFile.close();
    }
}

// Exercise 2
const double MAX_DOUBLE = 1.79769e+308;

inline
void process(const string &fileName) {
    // TODO
    ifstream inFile(fileName);

    int N, M;
    inFile >> N >> M;
    inFile.ignore(); //ignore new line character

    double maxOverall = -MAX_DOUBLE;

    for (int i = 0; i < N; i++) {
        double maxLine = -MAX_DOUBLE;
        for (int j = 0; j < M; j++) {
            double num;
            inFile >> num;
            maxLine = max(maxLine, num);
            maxOverall = max(maxOverall, num);
        }
        cout << maxLine << " ";
    }
    cout << maxOverall;

    inFile.close();
}

#endif //FILE_IO_INLAB_H
