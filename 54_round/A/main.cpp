#include <iostream>
using namespace std;
string s;
const string str = "hello";
int v;
bool check(int i)
{
    for( ; v < s.length(); ++v)
        if (s[v] == str[i])
        {
            ++v;
            return true;
        }
    return false;
}
int main()
{
    int i, j = 0;  
    cin >> s;
    for(i = 0; i < 5; ++i)
        if (check(i))
            ++j;
    j == 5 ? (cout << "YES") : (cout << "NO");
}