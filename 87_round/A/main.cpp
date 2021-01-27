#include <iostream>
using namespace std;
int main()
{
    int mx = 0, n, a, b, sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        sum += b;
        sum -= a;
        mx = max(sum, mx);
    }
    cout << mx;
}