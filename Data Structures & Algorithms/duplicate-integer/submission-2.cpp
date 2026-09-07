// Using freq map (but faster)

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> seen;

        for(int i:nums)
            if(find(seen.begin(), seen.end(), i) != seen.end())
                return true;
            else
                seen.push_back(i);
        
        return false;
    }
};