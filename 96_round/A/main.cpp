#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s.find("H") < s.length() || s.find("9") < s.length() || s.find("Q") < s.length() ? cout << "YES" : cout << "NO";
}