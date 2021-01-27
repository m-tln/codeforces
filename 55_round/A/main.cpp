#include <iostream>
using namespace std;

int main()
{
    string s, s2;
    cin >> s;
    s2 = s;
    int c = 0, c2 = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] <= 'z' && s[i] >= 'a')
        {
            s[i] = toupper(s[i]);    
            ++c;
        }
        if (s2[i] >= 'A' && s2[i] <= 'Z')
        {
            s2[i] = tolower(s2[i]);
            ++c2;
        }
    }
    c >= c2 ? cout << s2 << endl : cout << s << endl;
}