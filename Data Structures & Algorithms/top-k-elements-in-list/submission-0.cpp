// Brute Force - Freq Map + Sorting
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for(int &i:nums)
            freq[i]++;

        vector<pair<int, int>> vec;
        for(const auto& p: freq)
            vec.push_back({p.second, p.first});

        sort(vec.rbegin(), vec.rend());

        vector<int> res;
        for(int i=0; i<k; i++)
            res.push_back(vec[i].second);
        
        return res;
    }
};
