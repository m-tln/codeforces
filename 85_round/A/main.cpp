#include <iostream>
using namespace std;
int main()
{
    string s, s2;
    int n = 0;
    cin >> s;
    cin >> s2;
    for (int i = 0; i < s.length(); ++i)
    {
        s[i] = tolower(s[i]);
        s2[i] = tolower(s2[i]);
        //cout << s << " " << s2 << endl;
        if (s[i] < s2[i])
        {
            n = -1;
            break;
        }
        if (s[i] > s2[i])
        {
            n = 1;
            break;
        }
    }
    cout << n;
}