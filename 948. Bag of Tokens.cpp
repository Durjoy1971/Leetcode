class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());

        int left = 0, right = tokens.size()-1;
        int ans = 0;
        int cnt = 0;

        while(left <= right)
        {
            int need = tokens[left];
            if(need <= power)
            {
                ans++;
                left++;
                power -= need;
            }
            else
            {
                if(ans <= 0) break;
                ans--;
                power += tokens[right--];
            }
            cnt = max(ans,cnt);
        }

        return cnt;
    }
};