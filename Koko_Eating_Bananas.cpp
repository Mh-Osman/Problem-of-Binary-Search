
/*

Link : https://neetcode.io/problems/eating-bananas



*/

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {


        sort(piles.rbegin() , piles.rend());
       long long hi= piles[0];
       long long lo=1;
       long long k=hi;
        while(lo <= hi){

            long long mid = (hi+lo)>>1;
           long long th=0;
            for(int i=0;i<piles.size() ; i++){

               th += (piles[i] + mid -1)/mid;

            }

            if(th <= h){

            
                k= mid;

                hi = k-1;
            }else{


                lo=mid+1;
            }
        }

        return k;



    }
};
