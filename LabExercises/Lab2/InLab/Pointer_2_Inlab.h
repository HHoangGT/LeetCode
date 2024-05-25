#include <iostream>

using namespace std;

// Exercise 1
int **readArray()
{
    // TODO
    int **matrix = new int *[10];
    for (int i = 0; i < 10; i++)
    {
        matrix[i] = new int[10];
    }

    for (int i = 0; i < 10; i++)
    {
        bool row_zeros = false;
        for (int j = 0; j < 10; j++)
        {
            if (row_zeros)
            {
                matrix[i][j] = 0;
            }
            else
            {
                cin >> matrix[i][j];
                if (matrix[i][j] == 0)
                {
                    row_zeros = true;
                }
            }
        }
    }
    return matrix;
}

// Exercise 2
void addElement(int *&arr, int n, int val, int index)
{
    // TODO
    int *new_arr = new int[n + 1];
    for (int i = 0; i < index; i++)
    {
        new_arr[i] = arr[i];
    }
    new_arr[index] = val;
    for (int i = index + 1; i < n + 1; i++)
    {
        new_arr[i] = arr[i - 1];
    }
    delete[] arr;
    arr = new_arr;
}

// Exercise 3
int *flatten(int **matrix, int r, int c)
{
    int *arr = new int[r * c];
    int count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[count++] = matrix[i][j];
        }
    }
    return arr;
}

// Exercise 4
char *concatStr(char *str1, char *str2)
{
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0')
    {
        len1++;
    }
    while (str2[len2] != '\0')
    {
        len2++;
    }
    char *new_str = new char[len1 + len2 + 1];
    for (int i = 0; i < len1; i++)
    {
        new_str[i] = str1[i];
    }
    for (int i = 0; i < len2; i++)
    {
        new_str[len1 + i] = str2[i];
    }
    new_str[len1 + len2] = '\0';
    return new_str;
}

// Exercise 5
int **transposeMatrix(int **matrix, int r, int c)
{
    if (r == 0 || c == 0)
    {
        return nullptr;
    }

    int **new_matrix = new int *[c];
    for (int i = 0; i < c; i++)
    {
        new_matrix[i] = new int[r];
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            new_matrix[j][i] = matrix[i][j];
        }
    }
    return new_matrix;
}