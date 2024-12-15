#include <iostream>
using namespace std;
int main()
{
    unsigned int l, r, t, i;
    cin >> t;
    for (i = 0; i < t; ++i)
    {
        cin >> l >> r;
        r < 2 * l ? (cout << "-1" << " " << "-1" << endl) : (cout << l << " " << 2 * l << endl);
    }
}