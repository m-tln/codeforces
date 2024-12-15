#include <iostream>
using namespace std;
int main()
{
    int n, k, c = 0, i;
    cin >> n >> k;
    int ar[n];
    for (i = 0; i < n; ++i)
        cin >> ar[i];
    for (i = 0; i < n; ++i)
        if (ar[i] >= ar[k - 1] && ar[i] > 0)
            ++c;
    cout << c;
}