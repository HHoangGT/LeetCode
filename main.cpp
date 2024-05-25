#include "libs/template.h"
#include "LabExercises/Lab2/InLab/Pointer_Basic_Inlab.h"

using namespace std;

int main()
{
    int arr[100] = {5};
    int n = 0;
    int k = -1;
    add(arr, n, k);
    cout << arr[n];
    return 0;
}
