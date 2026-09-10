// Using Freq vector + Hash map
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string & s : strs) {
            vector<int> freq(26, 0);
            for (char c : s) 
                freq[c - 'a']++;
            
            string key = to_string(freq[0]);
            for (int i = 1; i < 26; ++i)
                key += ',' + to_string(freq[i]);
            
            mp[key].push_back(s);
        }

        vector<vector<string>> res;
        for (const auto& pair : mp)
            res.push_back(pair.second);
        
        return res;
    }
};