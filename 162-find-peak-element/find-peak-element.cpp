class Solution {
public:
    int binarySearch(vector<int>& nums,int si , int ei) {
    
        if( si>ei ){
            return si;
        }
         if( si==ei ){
            return si;
        }
    int mid  = si+((ei-si)%2);
    int lm = INT_MIN;
    int rm = INT_MIN;

    if( mid+1 <= ei){
        rm = nums[mid+1];
    }
     if( mid-1 >= si){
        lm = nums[mid-1];
    }
    if(nums[mid]>lm && nums[mid]>rm) {
        return mid;
    }
   
    if( nums[mid] < lm ) {
        return binarySearch( nums, si, mid-1);
    } else {
        return binarySearch( nums, mid+1, ei);
    }

    } 
    int findPeakElement(vector<int>& nums) {
        return binarySearch(nums,0,nums.size()-1);
    }
};