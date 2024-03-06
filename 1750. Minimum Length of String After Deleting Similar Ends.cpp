class Solution {
public:
    int minimumLength(string s) {
        int left = 0;
        int right = s.size()-1;

        while(left < right and s[left] == s[right])
        {
            int prev_left = left;
            while(left < s.size() and s[prev_left] == s[left]) left++;
            int prev_right = right;
            while(right >= 0 and s[prev_right] == s[right]) right--;
        }

        return (left > right) ? 0 : (right-left+1);
    }
};
