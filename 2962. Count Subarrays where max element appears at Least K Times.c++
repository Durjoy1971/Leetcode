class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int mx = nums[0];
        for(int i = 1; i < nums.size(); i++) mx = max(mx,nums[i]);
        long long ans = 0;

        for(int start = 0, end = 0; end < nums.size(); end++)
        {
            if(nums[end] - mx == 0) k--;
            while(!k)
            {
                if(nums[start]-mx == 0) k++;
                start++;
            }
            ans += start;
        }

        return ans;
    }
};