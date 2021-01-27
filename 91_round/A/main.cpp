#include <iostream>
#include <cmath>
using namespace std;
bool check(int n)
{
    int j = 1, i, tmp;
    while (n / int(pow(10, j)) > 0)
        ++j;
    if (n % 10 != 4 && n % 10 != 7)
        return false;
    for (i = 2; i <= j; ++i)
    {
        int a = pow(10, i);
        tmp = ((n % int(pow(10, i))) - (n % int(pow(10, i - 1)))) / int(pow(10, i - 1));
        if (tmp != 4 && tmp != 7)
            return false;
    }
    return true;
}
int main()
{
    unsigned int i, n;
    bool st = false;
    cin >> n;
    for (i = 1; i <= n; ++i)
    {
        if (check(i))
        {
            if (n % i == 0)
            {
                st = true;
                break;
            }
        }
    }
    st ? (cout << "YES") : (cout << "NO");
}