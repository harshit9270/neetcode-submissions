// Using sorting

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> p;
        for (int i = 0; i < nums.size(); i++)
            p.push_back({nums[i], i});

        sort(p.begin(), p.end());

        int i = 0, j = nums.size() - 1;
        while (i < j) {
            int cur = p[i].first + p[j].first;
            if (cur == target)
                return {min(p[i].second, p[j].second),
                        max(p[i].second, p[j].second)};
            else if (cur < target)
                i++;
            else
                j--;
        }
        
        return {};
    }
};