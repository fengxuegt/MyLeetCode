/*
 * @lc app=leetcode.cn id=844 lang=cpp
 *
 * [844] 比较含退格的字符串
 */

// @lc code=start
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int index_s = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '#') {
                s[index_s++] = s[i];
            } else {
                if (index_s > 0)
                    index_s--;
                else
                    index_s = 0;
            }
        }
        int index_tt = 0;
        for (int i = 0; i < t.size(); i++) {
            if (t[i] != '#') {
                t[index_tt++] = t[i];
            } else {
                if (index_tt > 0)
                    index_tt--;
                else
                    index_tt = 0;

            }
        }

        if (index_tt != index_s) {
            return false;
        }
        for (int i = 0; i < index_s; i++) {
            if (s[i] != t[i]) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

