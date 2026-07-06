class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end());
        string ans = "";
        string front = strs.front();
        string back = strs.back();
        for(int i=0;i<front.length() && i<back.length();i++){
            if(front[i]!=back[i]){
                break;
            }
            ans+=front[i];
        }
        return ans;
    }
};