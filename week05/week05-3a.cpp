// week05-3a.cpp 學習計畫 built function第1題
// leet code 58. tlength of last word
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0, now = 0;
        for (char c : s) {
            if (c == ' ') {
                if(now!=0)ans = now; // ans=max(ans,now);
                now = 0;
            } else now++;
        }
        if(now!=0)ans = now; // ans=max(ans,now);
        return ans;
    }
};
