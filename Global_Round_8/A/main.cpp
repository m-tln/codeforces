#include <iostream>
using namespace std;
int main()
{
    int i, c = 0, a, b, n, x;
    cin >> x;
    int arr[x];
    for (i = 0; i < x; ++i)
    {
        cin >> a >> b >> n;
        while (a <= n && b <= n)
        {
            a < b ? a += b : b += a;
            ++c;
        }
        arr[i] = c;
        c = 0;
    }
    for (int j = 0; j < x; ++j)
        cout << arr[j] << endl;
}
