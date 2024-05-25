#include <new>
// Exercise: 1
int getValueAtIndex(int *ptr, int k)
{
    return ptr[k];
}

// Exercise: 2
void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// Exercise: 3
int *zeros(int n)
{
    try
    {
        int *arr = new int[n]{0};
        return arr;
    }
    catch (const std::bad_alloc &)
    {
        return nullptr;
    }
}

// Exercise: 4
void shallowCopy(int *&newArr, int *&arr)
{
    newArr = arr;
}

// Exercise: 5
int **deepCopy(int **matrix, int r, int c)
{
    if (r <= 0 || c <= 0)
    {
        return nullptr;
    }

    int **newMatrix = new int *[r];
    for (int i = 0; i < r; i++)
    {
        newMatrix[i] = new int[c];
    }

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            newMatrix[i][j] = matrix[i][j];
        }
    }

    return newMatrix;
}

// Exercise: 6
void deleteMatrix(int **&matrix, int r)
{
    for (int i = 0; i < r; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
}

// Exercise: 7
void insertRow(int **&matrix, int r, int c, int *rowArr, int row)
{
    int **newMatrix = new int *[r + 1];
    for (int i = 0; i < r + 1; i++)
    {
        newMatrix[i] = new int[c];
    }

    for (int i = 0, j = 0; i < r + 1; i++)
    {
        if (i == row)
        {
            for (int k = 0; k < c; k++)
            {
                newMatrix[i][k] = rowArr[k];
            }
        }
        else
        {
            for (int k = 0; k < c; k++)
            {
                newMatrix[i][k] = matrix[j][k];
            }
            j++;
        }
    }

    for (int i = 0; i < r; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    matrix = newMatrix;
}