function countSubarrays(nums: number[], k: number): number {
    let ans = 0;

        let start = 0, end = 0, mx = nums[0];

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
};