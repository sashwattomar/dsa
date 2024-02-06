class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int siz = nums.size();
        k = k % siz ;

        if( k==0 ) {
            return;
        }

        vector<int> temp={};
       for ( int i = siz-k ; i < siz; i++) {
           temp.push_back(nums[i]);
       }

       for(int j = siz-k-1; j >= 0; j-- ) {
           swap(nums[j],nums[j+k]);
       }

        int l = 0;
        while(l<temp.size()){
            swap(temp[l],nums[l]);
            l++;
        }
return;
        
    }
};