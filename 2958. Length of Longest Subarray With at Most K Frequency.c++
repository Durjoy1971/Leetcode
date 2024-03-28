class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int ans = 0;

        for(int left = 0, right = 0; left < nums.size() and right < nums.size(); )
        {
            if(m[nums[right]] >= k)
            {
                m[nums[left]]--;
                left++;
            }
            else
            {
                m[nums[right]]++;
                ans = max(ans,right-left+1);
                right++;
            }
        }

        return ans;
    }
};