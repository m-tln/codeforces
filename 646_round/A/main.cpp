#include <iostream>
int x, y;
bool check()
{
    int num[x], sum = 0, i;
    for (i = 0; i < x; ++i)
    {
        std::cin >> num[i];
    }
    if (x == y)
    {
        for (i = 0; i < x; ++i)
            sum += num[i];
        if (sum % 2 == 1)
            return true;
        else
            return false;
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
                ++sum;
            }
        }
        if (sum != x && sum > 0)
        {
            return true;
        }
        else
        {
            if (sum == x)
            {
                if (sum % 2 == 1)
                {
                    return true;
                }
                else
                {
                    return false;
                }
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
    bool ar[eq];
    for (i = 0; i < eq; ++i)
    {
        std::cin >> x >> y;
        if (check())
            ar[i] = true;
        else
            ar[i] = false;
    }
    for (i = 0; i < eq; ++i)
    {
        if (ar[i])
            std::cout << "Yes" << std::endl;
        else
            std::cout << "No" << std::endl;
    }
}
