#include <iostream>
using namespace std;
int main()
{
    int t, k;
    cin >> t;
    while(t--)
    {
        cin >> k;
        k % 4 == 0 ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}