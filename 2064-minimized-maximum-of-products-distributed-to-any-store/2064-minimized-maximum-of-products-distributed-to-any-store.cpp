class Solution {
public:

    bool isPossible(vector<int>& arr, int n, int max){
        long long stores = 0;
        for(auto q:arr){
            stores+=(q+max-1)/max;
            if(stores>n) return false;
            
        }
        return true;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low=1;
        int high = *max_element(quantities.begin(),quantities.end());
        int ans = high;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(isPossible(quantities,n,mid)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};