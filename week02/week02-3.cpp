// week02-3.cpp學習計畫 Basic 第1題
// LeetCode 1768. Merge String Alternately
// 上週教 字串的長度 length()
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int N1 = word1.length(), N2 = word2.length(); // 字串的長度
        string ans;                                   // 放答案的字串
        for (int i = 0; i < max(N1, N2); i++) {
            if (i < N1)
                ans += word1[i]; // i沒超過範圍,就插入word1[i]
            if (i < N2)
                ans += word2[i]; // i沒超過範圍,就插入word2[i]
        }
        return ans; // 答案
    }
};
