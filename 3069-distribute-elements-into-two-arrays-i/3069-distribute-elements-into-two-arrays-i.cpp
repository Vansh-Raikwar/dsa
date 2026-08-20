class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        int n1=0;
        int n2=0;
        n1++;n2++;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(arr1[n1-1]>arr2[n2-1]){
                arr1.push_back(nums[i]);
                n1++;
            }else{
                arr2.push_back(nums[i]);
                n2++;
            }
        }
        vector<int> temp;
        for(int i=0;i<arr1.size();i++){
            temp.push_back(arr1[i]);
        }
        for(int i=0;i<arr2.size();i++){
            temp.push_back(arr2[i]);
        }
        return temp;
    }
};