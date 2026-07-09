class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int last=-1;
        for(int i=arr.size()-1;i>=0;i--){
            int temp = max(arr[i],last);
            arr[i]=last;
            last=temp;
        }
        return arr;
    }
};