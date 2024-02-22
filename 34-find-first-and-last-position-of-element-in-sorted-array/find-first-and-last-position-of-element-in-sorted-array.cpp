class Solution {
public:
   vector<int> binarySearch(vector<int>& nums, int target, int si , int ei) {

     vector<int>ans = {-1, -1};

        if( si>ei ){
            return ans;
        }


    int mid  = si+((ei-si)%2);
//   int mid = si + (ei - si) / 2; // Correct calculation of midpoint
    if( nums[mid] == target ) {
        int lb = mid;
        int rb = mid;
        ans[0]=lb;
        ans[1]=rb;
        while(lb>=si && nums[lb]==target){
            ans[0]=lb;
            lb--;
        }
        while(rb<=ei && nums[rb]==target){
            ans[1]=rb;
            rb++;
        }
        
        return ans;
    }
    if( nums[mid] > target ) {
        return binarySearch( nums, target, si, mid-1);
    } else {
        return binarySearch( nums, target, mid+1, ei);
    }

    } 
    vector<int> searchRange(vector<int>& nums, int target) {
       
        return binarySearch( nums, target, 0, nums.size()-1 );
        

    }
};