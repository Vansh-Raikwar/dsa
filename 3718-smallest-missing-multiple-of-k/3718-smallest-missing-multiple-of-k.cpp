class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> us(nums.begin(),nums.end());
        int multi=k;
        while(us.count(multi)){
            multi+=k;
        }
        return multi;
    }
};