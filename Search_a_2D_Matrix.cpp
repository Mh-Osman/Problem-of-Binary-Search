
/*

Link : https://neetcode.io/problems/search-2d-matrix



*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {



       int  m=matrix[0].size();
       int n=matrix.size();
      vector<int>v;
       for(int i=0;i<n;i++){


        for(int j=0;j<m;j++){

           v.push_back(matrix[i][j]);

        }
       }

    //    for(auto x: v)cout<<x<<" ";

    int lo=0;
    int hi=v.size()-1;
    while(hi - lo > 1){


        int mid = (hi+lo)>>1;

        if(v[mid] < target){

            lo = mid+1;
        }else{

            hi=mid;
        }
    }

    if(v[lo] == target){

          return true;
    }else if(v[hi] == target){
          return true;

    }else{

        return false;
    }
        
    }
};
