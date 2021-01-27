#include <iostream>
int x, y;
bool check()
{
    int num[x], sum = 0, i, odd;
    for (i = 0; i < x; ++i)
    {
        std::cin >> num[i];
    }
    if (x == y)
    {
        for (i = 0; i < x; ++i)
            sum += num[i];
        return sum % 2 == 1;
    }
    if (y == 1)
    {
        for (i = 0; i < x; ++i)
        {
            if (num[i] % 2 == 1)
                return true;
        }
    }
    if (y != 1)
    {
        for (i = 0; i < x; ++i)
        {
            if (num[i] % 2 == 1)
            {
                ++odd;
            }
        }
        if (odd != x && odd > 0)
        {
            return true;
        }
        else
        {
            if (odd == x)
            {
                return odd % 2 == 1;
            }
            else
            {
                return false;
            }
        }
    }
    return false;
}
int main()
{
    int eq, i;
    std::cin >> eq;
    for (i = 0; i < eq; ++i)
    {
        std::cin >> x >> y;
        std::cout << (check() ? "Yes" : "No") << std::endl;
    }
}
