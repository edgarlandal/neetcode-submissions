class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, bool> mapC;

        for(int i = 0; i < nums.size(); i++) mapC[nums[i]] = true;
        
        int count = 0;
        int max = 0;

        for(int i = 0; i < mapC.size(); i++)
        {
            if(mapC[i] == true) count++;
            else {
                if(count > max) max = count;
                count = 0;
            }
        }

        if(count > max) max = count;

        return max;
    }
};
