#include <iostream>
using namespace std;
string s2;
bool check(const char a)
{
    for(int j = 0; j < s2.length(); ++j)
    {
        if(a == s2[j])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    //cout << s.length() << endl;
    for(int i = 0; i < s.length(); ++i)
    {
        if (check(s[i]))
        {
            --n;
        }
        else
        {
            s2 += s[i];
        }
        //cout << n << s2 << endl;
    }
    //cout << n << endl;
    n % 2 == 1 ? (cout << "IGNORE HIM!") : (cout << "CHAT WITH HER!");
}