class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        int product = 1;
        int zeroCount = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zeroCount++;
            } else {
                product *= nums[i];
            }
        }

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {

            if (zeroCount > 1) {
                ans[i] = 0;
            }
            else if (zeroCount == 1) {
                ans[i] = (nums[i] == 0) ? product : 0;
            }
            else {
                ans[i] = product / nums[i];
            }
        }

        return ans;
    }
};