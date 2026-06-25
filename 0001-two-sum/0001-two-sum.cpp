class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> mpp;
        
        for(int i=0;i<nums.size();i++){
            mpp.push_back({nums[i],i});
        }
        sort(mpp.begin(),mpp.end());
        int left = 0, right=nums.size()-1;
        while(left<right){
            int sum = mpp[left].first+mpp[right].first;
            if(sum==target) return {mpp[left].second,mpp[right].second};
            else if(sum<target) left++;
            else right--;
        }
        
        return {};
    }
};