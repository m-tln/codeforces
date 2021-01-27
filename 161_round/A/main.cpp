#include <iostream>
using namespace std;
int main()
{
    string s;
    int x = 0, y = 0, i = 5, j;
    while (i--)
    {
        getline(cin, s);
        for (j = 0; j < 9; j += 2)
        {
            //cout << s[j];
            if (s[j] == '1')
            {
                x = i + 1;
                y = j / 2 + 1;
                //cout << x << " " << y << endl;
                break;
            }
        }
    }
    //cout << x << " " << y << endl;
    x >= 3 ? x = x - 3 : x = 3 - x;
    y >= 3 ? y = y - 3 : y = 3 - y;
    //cout << x << " " << y << endl;
    cout << x + y;
}