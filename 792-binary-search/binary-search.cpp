class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int si , int ei) {
    
        if( si>ei ){
            return -1;
        }


    int mid  = si+((ei-si)%2);

    if( nums[mid] == target ) {
        return mid;
    }
    if( nums[mid] > target ) {
        return binarySearch( nums, target, si, mid-1);
    } else {
        return binarySearch( nums, target, mid+1, ei);
    }

    } 

    int search(vector<int>& nums, int target) {
      return  binarySearch(nums, target, 0, nums.size()-1);
    }
};