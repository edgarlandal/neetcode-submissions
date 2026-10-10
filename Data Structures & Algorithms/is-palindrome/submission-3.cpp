class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return tolower(c);});

        char lastChar = s[s.size() - 1];

        if(lastChar == '?') s.pop_back();

        bool palindrome = true;

        string a;
        for(int i = 0; i < s.size(); i++)
            if(s[i] >= 97 && s[i] <= 122 || s[i] >= 48 && s[i] <= 57)  a.push_back(s[i]);

        int size = s.size() % 2 == 1  ? s.size()/2 + 1: s.size()/2;

        for(int i = 0; i < size; i++)
        {
            if(a[i] != a[a.size() - 1 - i])
            {
                palindrome = false;
                break;
            }
        }
        
        return palindrome;
    }
};
