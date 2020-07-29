#include <iostream>
using namespace std;
int main()
{
    int n, i = 0, x, sum = 0;
    cin >> n;
    int a[n];
    for(i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }
    for(i = 0; i < n - 1; ++i)
    {
        for(int j = i + 1; j < n; ++j)
        {
            if(a[i] > a[j])
            {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
    x = 0;
    i = 0;
    while(n--)
    {
        x += a[n];
        ++i;
        if(sum - x < x)
        {
            break;
        }
    }
    cout << i;
}