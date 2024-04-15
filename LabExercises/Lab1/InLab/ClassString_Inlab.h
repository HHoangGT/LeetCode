//
// Created by Nguyen Huy Hoang on 13/4/24.
//

#ifndef CLASSSTRING_INLAB_H
#define CLASSSTRING_INLAB_H

#include <iostream>
#include  <string>

using namespace std;

// Exercise 1
inline
void replaceString(string s, const string &s1, const string &s2) {
    //TO DO
    const size_t pos = s.rfind(s1);
    if (pos != string::npos) {
        s.replace(pos, s1.length(), s2);
    }
    cout << s;
}

// Exercise 2
inline
void deleteWord(string s, const string &s1) {
    //TO DO
    size_t pos = s.find(s1);
    while (pos != string::npos) {
        s.erase(pos, s1.length());
        pos = s.find(s1);
    }
    cout << s;
}

#endif //CLASSSTRING_INLAB_H
