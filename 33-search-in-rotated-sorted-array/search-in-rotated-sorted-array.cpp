class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int si, int ei) {
        if (si > ei) {
            return -1;
        }

        int mid  = si+((ei-si)%2);

        if (nums[mid] == target) {
            return mid;
        }

        if (nums[si] <= nums[mid]) {
            if (target >= nums[si] && target < nums[mid]) {
                return binarySearch(nums, target, si, mid - 1);
            } else {
                return binarySearch(nums, target, mid + 1, ei);
            }
        } else {
            if (target > nums[mid] && target <= nums[ei]) {
                return binarySearch(nums, target, mid + 1, ei);
            } else {
                return binarySearch(nums, target, si, mid - 1);
            }
        }
    }

    int search(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size() - 1);
    }
};
