#include <iostream>
int main()
{
    int c = 0, n;
    std::string s;
    std::cin >> n;
    std::cin >> s;
    //std::cout << s << std::endl;
    for (int i = 0; i < n; ++i)
        if (s[i] == s[i + 1])
            ++c;
    std::cout << c;
}