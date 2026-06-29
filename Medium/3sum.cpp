class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        vector<vector<int>> result;  // add this

        for (int i = 0; i < n-2; i++) {
            if (i > 0 && nums[i] == nums[i-1]) { continue; }  // fix: () and ;
            
            int l = i+1;      // fix: declare int
            int r = n-1;      // fix: declare int
            int sum = -nums[i];  // fix: nums[i] not nums[1]

            while (l < r) {
                int s = nums[l] + nums[r];
                if (s == sum) {
                    result.push_back({nums[i], nums[l], nums[r]});  // fill this
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l-1]) { l++; }  // fix: && not 'and'
                    while (r>=0 && nums[r] == nums[r+1]) { r--; }  // fix: && not 'and'
                }
                else if (s < sum) { l++; }
                else { r--; }
            }
        }

        return result;
    }
};