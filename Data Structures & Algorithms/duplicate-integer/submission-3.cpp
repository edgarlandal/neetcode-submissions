class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, bool> dub;

        for(int i = 0; i < nums.size(); i++)
        {
            if(!dub[nums[i]])
            {
                dub[nums[i]] = true;
            } else {
                return true;
            }


        }

        return false;
    }
};