#include <iostream>

using namespace std;

// Exercise 1
int recursiveSum(int arr[], int size)
{
    // TODO
    if (size == 0)
        return 0;
    return arr[0] + recursiveSum(arr + 1, size - 1);
}

// Exercise 2
long int decimalToBinary(int decimal_number)
{
    if (decimal_number == 0)
        return 0;
    return decimal_number % 2 + 10 * decimalToBinary(decimal_number / 2);
}

// Exercise 3
bool palindrome(string strg)
{
    int left = 0;
    int right = strg.length() - 1;

    while (left < right)
    {
        if (strg[left] != strg[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool palindromeRecursion(string s)
{
    // BEGIN YOUR IMPLEMENTATION [1]
    // TODO
    if (s.length() <= 1)
        return true;
    if (s[0] != s[s.length() - 1])
        return false;
    return palindromeRecursion(s.substr(1, s.length() - 2));
    // END YOUR IMPLEMENTATION [1]
}