class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans = 0, layer = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                layer++;
            } else {
                layer--;
                if (i > 0 && s[i - 1] == '(') {
                    ans += (1 << layer);
                }
            }
        }
        return ans;
    }
};

