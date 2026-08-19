class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,int> mp;
        for(auto el:reservedSeats){
            int row = el[0];
            int seat = el[1];
            mp[row] = (mp[row]|(1<<seat));
        }
        int result = (n-mp.size())*2;
        int mask_A = (1<<2)|(1<<3)|(1<<4)|(1<<5);
        int mask_B = (1<<4)|(1<<5)|(1<<6)|(1<<7);
        int mask_C = (1<<6)|(1<<7)|(1<<8)|(1<<9);
        for(auto [row,booked_mask]:mp){
            bool A = (mask_A & booked_mask)==0;
            bool B = (mask_B & booked_mask)==0;
            bool C = (mask_C & booked_mask)==0;
            if(A && C) result+=2;
            else if(A||B||C) result+=1;
        }
        return result;
    }
};