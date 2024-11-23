/*

Link: https://neetcode.io/problems/find-target-in-rotated-sorted-array

*/

class Solution {
public:
    int search(vector<int>& nums, int target) {

         int lo=0;
         int hi=nums.size()-1;

         while(lo<=hi){

           int mid = (hi+lo)>>1;
           if(nums[mid] == target)return mid;

           if(nums[lo] <= nums[mid]){

             if(target < nums[lo] || target > nums[mid]){
                lo = mid+1;
             }else{

                hi=mid-1;
                
             }



           }else{
 
             if( target < nums[mid] ||  target > nums[hi]){


                hi=mid-1;
             }else{

                lo=mid+1;
             }

           }

         }

         return -1;

        
        
    }
};
