// Last updated: 7/26/2026, 8:20:00 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (int i = 0 ; i < n; i++){
            sum += nums[i];
        }
        int add = n*(n+1)/2;
        int ans = add - sum;
        return ans;
    }
};