class Solution {
public:

    bool isMatch(int freq1[], int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0;i<s1.size();i++){
            freq[s1[i]-'a']++;
        }
        int windSize=s1.length();
        if (s1.length() > s2.length()) return false;

        for(int i=0;i<=s2.length()-windSize;i++){
            int windIdx=0, idx=i;
            int windFreq[26]={0};
            while(windIdx<windSize && idx<s2.length()){
                windFreq[s2[idx]-'a']++;
                windIdx++; idx++;
            }
            if(isMatch(freq, windFreq)){
                return true;
            }

        }
        return false;
    }
};