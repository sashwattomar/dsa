class Solution {
public:
   void binarySearch(vector<int>& nums, int& min, int si, int ei) {
        if (si > ei) {
            return;
        }

        int mid  = si+((ei-si)%2);

        if (nums[mid] < min) {
            min = nums[mid];
        }

        if (nums[si] <= nums[mid]) {
           //left-half is sorted
                if( nums[si] < min) {
                    min = nums[si];
                }
                binarySearch(nums, min, mid + 1, ei);
                return;
            
        } else {
            //right-half is sorted
           if( mid+1 <= ei && nums[mid+1] < min ){
                min = nums[mid+1];
           }
           binarySearch(nums, min, si, mid - 1);
        }
    }

    int findMin(vector<int>& nums) {
        int min = INT_MAX;
        binarySearch(nums, min, 0, nums.size() - 1);
        return min ;
    }
};