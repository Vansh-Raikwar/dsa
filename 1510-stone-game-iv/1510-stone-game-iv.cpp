class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<bool> st(n+1,false);
        for(int i=1;i<=n;i++){
            for(int j=1;j*j<=i;j++){
                if(st[i-j*j]==0){
                    st[i] = true;
                    break;
                }
            }
        }
        return st[n];
    }
};