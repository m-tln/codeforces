#include <iostream>
int main()
{
    std::string s;
    std::cin >> s;
    int c = 1, c2 = 1;
    if(s.length() < 7)
    {
        std::cout << "NO";
        return 0;
    }
    s[s.length() - 1] == '1' ? s.append("0") : s.append("1");
    for(int i = 1; i < s.length(); ++i)
    {
        if(s[i] == '1' && s[i] == s[i - 1])
        {
            ++c;
        }
        else
        {
            c = 1;
        }
        if (s[i] == '0' && s[i] == s[i - 1])
        {
            ++c2;
        }
        else
        {
            c2 = 1;
        }
        if(c >= 7 || c2 >= 7)
        {
            std::cout << "YES";
            break;
        }
        else
        {
            if(i == s.length() - 2)
            {
                std::cout << "NO";   
                break;
            }
        }
    }
}