#include "libs/template.h"
#include "LeetCode/FirstPalindromicString2108.h"

using namespace std;

int main() {
    vector<string> inp = {"abc", "car", "ada", "racecar", "cool"};
    auto *obj = new Solution();
    cout << obj->firstPalindrome(inp) << '\n';
    return 0;
}
