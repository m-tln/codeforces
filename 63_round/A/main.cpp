#include <iostream>
using namespace std;
int main()
{
    int n, sum[3] = {0, 0, 0}, i, j;
    cin >> n;
    int arr[3][n];
    for (i = 0; i < n; ++i)
        for (j = 0; j < 3; ++j)
            cin >> arr[j][i];
    for (i = 0; i < 3; ++i)
        for (j = 0; j < n; ++j)
            sum[i] += arr[i][j];
    sum[0] == 0 && sum[1] == 0 && sum[2] == 0 ? cout << "YES" : cout << "NO";
}