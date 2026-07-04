class Solution {
public:
    int largestRectangleArea(vector<int>& he) {
        int n = he.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        stack<int> st;

        // right smallest value
        for(int i=n-1;i>=0;i--){
            while(st.size()>0 && he[st.top()]>=he[i]){
                st.pop();
            }
            right[i] = st.empty()?n:st.top();
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }

        // left smallest value
        for(int i=0;i<n;i++){
            while(st.size()>0 && he[st.top()]>=he[i]){
                st.pop();
            }
            left[i] = st.empty()?-1:st.top();
            st.push(i);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            int width = right[i]-left[i]-1;
            int currArea = width*he[i];
            ans = max(ans,currArea);
        }
        return ans;
    }
};