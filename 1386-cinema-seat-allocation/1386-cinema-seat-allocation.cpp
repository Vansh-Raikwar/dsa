class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, set<int>> mp;
        for(auto el:reservedSeats){
            int row = el[0];
            int seat = el[1];
            mp[row].insert(seat);
        }
        int result = (n-mp.size())*2;
        for(auto [row,seats]:mp){

            auto isAvalible = [&](int a){
                return seats.find(a) == seats.end();
            };

            bool A = isAvalible(2)&&isAvalible(3)&&isAvalible(4)&&isAvalible(5);
            bool B = isAvalible(4)&&isAvalible(5)&&isAvalible(6)&&isAvalible(7);
            bool C = isAvalible(6)&&isAvalible(7)&&isAvalible(8)&&isAvalible(9);
            if(A && C) result+=2;
            else if(A||B||C) result+=1;
        }
        return result;
    }
};