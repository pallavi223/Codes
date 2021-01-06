// merger two array
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {

       int len = m+n;
       //compare the two array and get the largest number to the last postion of nums1
       while(n > 0 && m > 0){
           if(nums1[m-1] > nums2[n-1]){
               nums1[len-1] = nums1[m-1];
               len--;
               m--;
           }else{
               nums1[len-1] = nums2[n-1];
               len--;
               n--;
           }
       }

       //if pointer m stops then get the remaining numbers from nums2 into nums1
       if(m == 0) {
           while(n > 0){
              nums1[len-1] = nums2[n-1];
              len--;
              n--;
           }
       }

   }
   or//est solution
   class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s=nums1.size();
        int i=0;
        for(i=0;i<n;i++){
            nums1[m+i]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};
