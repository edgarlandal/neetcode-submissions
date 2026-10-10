class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
         map<int, int> mapC;
        
        for(int i = 0; i < numbers.size(); i++)
        {
            int complement = target - numbers[i];
            if (mapC.find(complement) != mapC.end()) return vector<int>{mapC[complement] + 1, i + 1};
            mapC[numbers[i]] = i;
        }

        return vector<int>();
    }
};
