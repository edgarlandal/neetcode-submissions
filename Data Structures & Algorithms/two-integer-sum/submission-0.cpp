class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mapC;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (mapC.find(complement) != mapC.end()) return vector<int>{mapC[complement], i};
            mapC[nums[i]] = i;
        }

        return vector<int>();
    }
};
