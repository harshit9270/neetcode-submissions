// Using hash map (1 Pass)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        
        for(int i=0; i<nums.size(); i++){
            int diff = target-nums[i];

            if(mp.count(diff) and mp[diff] != i)
                return {mp[diff], i};
            mp[nums[i]] = i;
        }

        return {};
    }
};
