#include <iostream>
using namespace std;
int main()
{
    int x, y, c;
    cin >> x >> y;
    if (x * y % 2 == 0)
        c = (x * y) / 2;
    else
        x > y ? c = (x / 2) * y + y / 2 : c = (y / 2) * x + x / 2;
    cout << c;
}