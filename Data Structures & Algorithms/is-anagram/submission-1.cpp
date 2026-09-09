// Using freq map

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq_s(26, 0);
        vector<int> freq_t(26, 0);

        for(char ch:s)
            freq_s[ch-'a']++;
        
        for(char ch:t)
            freq_t[ch-'a']++;
        
        return freq_s == freq_t;
    }
};
