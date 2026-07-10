class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        if(n>m) return findMedianSortedArrays(nums2,nums1);
        int low = 0;
        int high = n;
        while(low<=high){
            int i1 = (low+high)/2; // mid of first array
            int i2 = (n+m+1)/2-i1;  // mid of second array
            int max1 = (i1==0)? INT_MIN:nums1[i1-1];   // max value of array 1
            int max2 = (i2==0) ? INT_MIN :nums2[i2-1];   //  max value of array 2
            int min1 = (i1==n) ?INT_MAX:nums1[i1];
            int min2 = (i2==m)?INT_MAX:nums2[i2];
            if(max1<=min2 && max2<=min1){
                int k =n+m;
                if(k%2==0){
                    return ((double) max(max1,max2)+(double) min(min1,min2))/2.0;
                }else{
                    return (double) max(max1,max2);
                }
            }else if(min1<min2) {low=i1+1;}
            else {high=i1-1;}
        }
        return 0.0;
    }
};