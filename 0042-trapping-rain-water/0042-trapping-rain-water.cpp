class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lhigh (n,0);
        vector<int> rhigh(n,0);
        lhigh[0] = height[0];
        rhigh[n-1] = height[n-1];
        //left high
        for(int i=1;i<n;i++){
            lhigh[i] = max(lhigh[i-1],height[i]);
        }
        //right high
        for(int i=n-2;i>=0;i--){
            rhigh[i] = max(rhigh[i+1],height[i]);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans+=min(rhigh[i],lhigh[i])-height[i];
        }
        return ans;
    }
};