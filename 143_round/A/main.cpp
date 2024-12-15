#include <iostream>
using namespace std;
int main()
{
    int n, c = 0, p;
    string s;
    cin >> n;
    for (int i = 0; i <= n; ++i)
    {
        getline(cin, s);
        if (s.find('1') < 5 && s.find('1', s.find('1') + 1) < 5)
            ++c;
    }
    cout << c << endl;
}