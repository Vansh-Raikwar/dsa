class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x=0;
        for(int y=1;y<nums.size();y++){
            if(nums[x]!=nums[y]){
                nums[x+1]=nums[y];
                x++;
            }
        }
        return x+1;
    }
};