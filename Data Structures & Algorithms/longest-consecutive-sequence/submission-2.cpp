class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mapC(nums.begin(), nums.end());
        
        int count = 0;
        int max = 0;

        for (int num : mapC) {
            if (mapC.find(num - 1) == mapC.end()) {
                int currentNum = num;
                count = 1;

                while (mapC.find(currentNum + 1) != mapC.end()) {
                    currentNum += 1;
                    count++;
                }

                if (count > max) max = count;
            }
        }
        return max;
    }
};
