class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minEl = min_element(begin(nums),end(nums))-begin(nums);
        int maxEl = max_element(begin(nums),end(nums))-begin(nums);
        int left = min(minEl,maxEl);
        int right = max(minEl,maxEl);
        return min({left+1+n-right,right+1,n-left});
    }
};