class Solution {
public:
    string longestPrefix(string s) {
        int n=s.length();
        vector<int> lsp(n,0);
        int len=0;
        int i=1;
        while(i<n){
            if(s[i]==s[len]){
                len++;
                lsp[i]=len;
                i++;
            }else{
                if(len!=0){
                    len=lsp[len-1];
                }else{
                    lsp[i]=0;
                    i++;
                }
            }
        }
        return s.substr(0,lsp[n-1]);
    }
};