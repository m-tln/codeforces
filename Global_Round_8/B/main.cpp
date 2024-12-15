#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string s;
    const string ans = "codeforces";
    unsigned long long k = 0, c = 1, pl = 10;
    int i, j;
    cin >> k;
    if (k != 1)
    {
        while (c < k)
        {
            ++pl;
            c = pow(pl / 10, pl % 10) * pow((pl / 10) - 1, 10 - (pl % 10));
        }
        pl -= 10;
        for (i = 0; i < 10; i++)
        {
            if (i >= pl % 10)
                for (j = 0; j <= (pl / 10) - 1; ++j)
                    s += ans[i];
            else
                for (j = 0; j <= pl / 10; ++j)
                    s += ans[i];
        }
        cout << s << endl;
    }
    else
        cout << ans;
}