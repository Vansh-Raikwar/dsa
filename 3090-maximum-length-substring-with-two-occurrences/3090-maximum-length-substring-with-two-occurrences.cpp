#pragma GCC optimize("O3,unroll-loops")
class Solution {
public:
    int maximumLengthSubstring(string s) {
        int result=0, k =0;
        int freq[26] = {0};
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
            while(freq[s[i]-'a']>2){
                freq[s[k++]-'a']--;
            }
            result = max(result,i-k+1);
        }
        return result;
    }
};