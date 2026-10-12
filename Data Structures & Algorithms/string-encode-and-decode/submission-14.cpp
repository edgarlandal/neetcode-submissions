class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(int i = 0 ; i < strs.size(); i++)
        {
            res+= (strs[i] == "" ? " " : strs[i]) += "*";
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        stringstream ss(s);

        string text;

        while(getline(ss, text, '*'))
        {   
            strs.push_back(text == " "? "": text);
        }

        return strs;
    }
};
