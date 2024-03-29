class Solution {
    public long countSubarrays(int[] nums, int k) {
        long ans = 0;

        int start = 0, end = 0, mx = nums[0];

        while(end < nums.length)
        {
            mx = Math.max(mx,nums[end]);
            end++;
        }
        end = 0;
        while(end < nums.length)
        {
            if(nums[end] == mx)
            {
                k--;
            }
            while(k == 0)
            {
                if(nums[start] == mx) k++;
                start++;
            }
            ans += start;
            end++;
        }

        return ans;
    }
}