// Exercise 1
int calculate_power(int n, int e)
{
    if (e == 0)
    {
        return 1;
    }
    else
    {
        return n * calculate_power(n, e - 1);
    }
}

// Exercise 2
int gcdRecursion(int p, int q)
{
    // BEGIN YOUR IMPLEMENTATION [1]
    // TODO
    if (p == q)
    {
        return p;
    }
    else if (p > q)
    {
        return gcdRecursion(p - q, q);
    }
    else
    {
        return gcdRecursion(p, q - p);
    }

    // END YOUR IMPLEMENTATION [1]
}

int gcdIteration(int p, int q)
{
    // BEGIN YOUR IMPLEMENTATION [2]
    // TODO
    int result = min(p, q);
    while (result > 0)
    {
        if (p % result == 0 && q % result == 0)
        {
            return result;
        }
        result--;
    }
    // END YOUR IMPLEMENTATION [2]
    return 0;
}

// Exercise 3
int strLen(char *str)
{
    if (*str == '\0')
    {
        return 0;
    }
    return 1 + strLen(str + 1);
}