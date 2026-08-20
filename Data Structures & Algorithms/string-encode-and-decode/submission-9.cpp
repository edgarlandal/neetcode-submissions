class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for (int i = 0; i < strs.size(); ++i)
            res += strs[i] + "\"";

        return res;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int start = 0;
        int size = 0;

        for (int i = 0; i < s.size(); i++)
        {
            char a = s.at(i);
            
            size++;

            if (a == '\"')
            {
                strs.push_back(s.substr(start, size - 1));
                start = i + 1;
                size = 0;
            }

        }

        return strs;
    }
};
