#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

    int romanToInt(std::string s) {
        std::unordered_map<char, int>values = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int result = 0;
        for(int i = 0; i < s.length() - 1; i++)
        {
            if(values[s[i]] < values[s[i+1]])
            {
                result -= values[s[i]];
            }
            else
            {
                result += values[s[i]];
            }
        }
        result += values[s[s.length() - 1]];
        return result;
    }
int main()
{
    std::string s = "IV";
    std::cout << romanToInt(s) << std::endl;
}