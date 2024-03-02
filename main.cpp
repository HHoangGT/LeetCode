#include "libs/template.h"
#include "LeetCode/SquareOfSortedArray977.h"

using namespace std;

int main() {
    vector<int> inp = {-4, -1, 0, 3, 10};
    auto *obj = new Solution();
    vector<int> res = obj->sortedSquares(inp);
    for (int i: res)
        cout << i << " ";
    return 0;
}