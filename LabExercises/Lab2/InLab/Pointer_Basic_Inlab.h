// Exercise 1
int calcSum(int *ptr, int n)
{
    if (n == 0)
        return 0;
    return *ptr + calcSum(ptr + 1, n - 1);
}

// Exercise 2
void add(int *ptr, int n, int k)
{
    ptr += n;
    *ptr = k;
}