/*#include <iostream>
int main()
{
    unsigned int x, c;
    std::cin >> x;
    c = x / 5;
    c += (x % 5) / 4;
    c += ((x % 5) % 4) / 3;
    c += (((x % 5) % 4) % 3) / 2;
    c += ((((x % 5) % 4) % 3) % 2) / 1;
    std::cout
    << c;
}*/
#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cout << (x + 4) / 5 << '\n';
}