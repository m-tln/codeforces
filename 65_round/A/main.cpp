#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int i,n;
    cin >> n;
    string a[n];
    for(i = 0; i < n; ++i)
    {
        cin >> s;
        a[i] = s.length() < 11 ? s : s[0] + to_string(s.length() - 2) + s[s.length() - 1];
    }
    for (i = 0; i < n; ++i)
    {
        cout << a[i] << endl;
    }
}