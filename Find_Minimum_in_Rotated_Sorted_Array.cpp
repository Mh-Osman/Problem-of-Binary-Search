class Solution {
public:
    int findMin(vector<int> &nums) {

         
         int lo=0;
         int hi =nums.size()-1;
          int res = INT_MAX;
         while(lo<=hi){
             
             int mid = (hi+lo)>>1;
             if(nums[mid] >= nums[lo]){
       
               
                if(res >= nums[mid]){

                    res=nums[lo];

                }
                 lo= mid+1;
                
             }else{


                hi = mid;
             }



         }

         return res;
        
    }
};
