class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        stack<int> st;
        for(auto num:nums2){
            while(!st.empty() && st.top()<num){
                mp[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
        vector<int> ans;
        for(auto el:nums1){
            if(mp.find(el)!=mp.end()){
                ans.push_back(mp[el]);
            }else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};