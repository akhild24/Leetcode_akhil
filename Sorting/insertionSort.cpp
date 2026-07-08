class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            int current = nums[i];
            int prev = i - 1;
            while (prev >= 0 && nums[prev] > current) {
                nums[prev + 1] = nums[prev];
                prev--;
            }
            nums[prev + 1] = current;
        }
        return nums;
    }
};