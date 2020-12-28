class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // using lower_bound() function
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    }
};
