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
    //std::cout << c << std::endl;  
    for(int i = 1; i < s.length(); ++i)
    {
        //std::cout << i << " ";
        if(s[i] == '1' && s[i] == s[i - 1])
        {
            ++c;
            //std::cout << c << " ";
        }
        else
        {
            c = 1;
            //std::cout << c << " ";
        }
        if (s[i] == '0' && s[i] == s[i - 1])
        {
            ++c2;
            //std::cout << c2 << std::endl;
        }
        else
        {
            c2 = 1;
            //std::cout << c2 << std::endl;
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