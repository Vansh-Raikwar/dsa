class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int xor_n = 0;
        bool hasNonZero = false;
        for(auto el:nums){
            xor_n^=el;
            if(el!=0) hasNonZero=true;
        }
        if(xor_n!=0) return n;
        if(hasNonZero) return n-1;
        return 0;
    }
};