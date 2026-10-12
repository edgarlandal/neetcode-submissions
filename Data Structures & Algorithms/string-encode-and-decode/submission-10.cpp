class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(int i = 0 ; i < strs.size(); i++)
        {
            res += strs[i] + " ";
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        stringstream ss(s);

        string text;
        while(ss >> text)
        {
            strs.push_back(text);
        }

        if(strs.size() == 0) strs.push_back("");

        return strs;
    }
};
