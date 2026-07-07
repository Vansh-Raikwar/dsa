class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int count=0;
        int len=0;
        mpp[0]=1;
        for(auto it:nums){
            count+=it;
            len+=mpp[count-k];
            ++mpp[count];
        }
        return len;
    }
};