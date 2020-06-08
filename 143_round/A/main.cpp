#include <iostream>
using namespace std;
int main()
{
    int n, c = 0;
    string s;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> s;
        if(s.find('1') + 1 && s.find('1' , s.find('1')) + 1)
            ++c;
    }
    cout << c;
}