class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int left=0,right=0,maxLen=0;
        unordered_set<char> substr;
        while(right<n){
            if(substr.find(s[right])==substr.end()){
                substr.insert(s[right]);
                maxLen = max(maxLen,right-left+1);
                right++;
            }else{
                substr.erase(s[left]);
                left++;
            }
        }
        return maxLen;
    }
};