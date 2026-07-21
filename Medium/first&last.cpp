class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int first = -1, last = -1;

        while (low <= high) {
            int guess = (low + high)/2;
            if (nums[guess] < target)       low = guess + 1;
            else if (nums[guess] > target)  high = guess - 1;
            else {
                first = guess;
                high = guess - 1;  // only change: go left
            }
        }

        low = 0; high = nums.size()-1;  // reset for second pass

        while (low <= high) {
            int guess = (low + high)/2;
            if (nums[guess] < target)       low = guess + 1;
            else if (nums[guess] > target)  high = guess - 1;
            else {
                last = guess;
                low = guess + 1;   // only change: go right
            }
        }

        return {first, last};
    }
};