class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int> us(nums.begin(),nums.end());
        int seq = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                seq +=nums[i];
            }else break;
        }
        while(us.count(seq)) seq++;
        return seq;
    }
};