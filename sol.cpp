class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // create an iterator to find the target element
        vector<int>::iterator it = find(nums.begin(), nums.end(), target);
        if (it == nums.end()) {
            // if the target element is not on the list, then find the element that is greater than it, then return its index
            for (int i = 0; i < (int) nums.size(); i++) {
                if (target < nums[i]) {
                    return i;
                }
            }
        }
        // otherwise, return the index of target element
        return it - nums.begin();
    }
};
