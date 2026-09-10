// Brute Force - Sort + Hash map
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(string &s:strs){
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            mp[sorted_s].push_back(s);
        }

        vector<vector<string>> res;
        for(auto &it:mp)
            res.push_back(it.second);

        return res;
    }
};
