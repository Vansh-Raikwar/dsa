class Solution {
public:
    int maximumLengthSubstring(string s) {
        int result=0, k =0;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            while(mp[s[i]]>2){
                mp[s[k++]]--;
            }
            result = max(result,i-k+1);
        }
        return result;
    }
};