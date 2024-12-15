#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, s2;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {

        s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            s[i] = ' ';
        else
        {
            s2.append(1, '.');
            s2.append(1, s[i]);
        }
    }
    cout << s2;
}