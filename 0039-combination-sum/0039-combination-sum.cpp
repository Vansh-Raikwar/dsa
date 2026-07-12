class Solution {
public:

    void back(vector<int> &arr, int idx, int tar, vector<int> &curr, vector<vector<int>> &ans){
        if(tar==0){
            ans.push_back(curr);
            return;
        }
        if(tar < 0) return;
        for(int i=idx;i<arr.size();i++){
            if(arr[i]>tar) break;
            curr.push_back(arr[i]);
            back(arr,i,tar-arr[i],curr,ans);
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        vector<int> curr;
        back(arr,0,target,curr,ans);
        return ans;
    }
};