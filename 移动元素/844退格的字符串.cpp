/* ************************************************************************
> File Name:     844退格的字符串.cpp
> Author:        fengxuegt
> blog:          fengxuegt.github.io
> Created Time:  2021年11月04日 星期四 00时15分28秒
> Description:   
 ************************************************************************/
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
…        for (int i = 0; i < index_s; i++) {
            if (s[i] != t[i]) {
                return false;
            }
        }
        return true;
    }
};
