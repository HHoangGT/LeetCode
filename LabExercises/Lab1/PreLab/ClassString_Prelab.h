#include <iostream>
#include <string>

using namespace std;

void cutString(const string &s, int index) {
    // TO DO
    // cutting the string from index to the end of the string
    // and print the result
    // if the index is invalid for the string, print nothing
    if (index < 0 || index >= s.length()) {
        return;
    }
    cout << s.substr(index, s.length() - index);
}

void findAllIndex(const string &s1, string s2) {
    // TO DO
    size_t found = s1.find(s2[0]);
    int count = 0;
    while (found != string::npos) {
        cout << found << " ";
        count++;
        found = s1.find(s2[0], found + 1);
    }
    if (count == 0) {
        cout << -1;
    }
}