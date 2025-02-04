class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

        int n = nums.size();
        int ans = nums[0];
        int curr_sum = nums[0];

        for(int i=1;i<n;i++){

            if(nums[i]>nums[i-1]) curr_sum+=nums[i];
            else curr_sum = nums[i];

            ans = max(ans,curr_sum);
        }

        return ans;
        
    }
};