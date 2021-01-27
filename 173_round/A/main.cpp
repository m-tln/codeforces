#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int n, x = 0;
    cin >> n;
    while(n--)
    {
        cin >> s;
        if(s == "X++" || s == "++X")
            ++x;
        else
            --x;
    }
    cout << x;
}