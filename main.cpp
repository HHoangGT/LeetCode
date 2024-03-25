#include "libs/template.h"
#include "NAB/ReturnSmallestPositiveIntegerNotInArray.h"

using namespace std;

int main() {
    // write the code to compare the running time of two solutions function
    // solution and solution2
    vector<int> A = {1, 3, 6, 4, 1, 2};
    cout << solution(A) << endl;
    cout << solution2(A) << endl;
    return 0;
}