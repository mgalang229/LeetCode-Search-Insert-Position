class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size();
        // use binary search algorithm
        while (l < r) {
            int k = (l + r) / 2;
            if (nums[k] >= target) {
                r = k;
            } else {
                l = k + 1;
            }
        }
        return r;
    }
};
