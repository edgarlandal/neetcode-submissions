class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string, vector<string>> mapOfString;

        for(int i = 0; i < strs.size(); i++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());
            mapOfString[s].push_back(strs[i]);
        }

        for(auto strs: mapOfString)
        {
            res.push_back(strs.second);
        }

        return res;
    }
};
