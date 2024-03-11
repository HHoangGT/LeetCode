#include "libs/template.h"
#include "LeetCode/CustomSortString791.h"

using namespace std;

int main() {
    string inp = "cabaabac";
    string order = "abc";
    Solution sol;
    cout << sol.customSortString(order, inp);
    cout << endl;
    return 0;
}