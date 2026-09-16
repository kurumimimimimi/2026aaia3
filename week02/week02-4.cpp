// week02-4.cpp學習計畫 Basic 第2題
// LeetCode 389. Find-the-Difference
// 給你兩個字串,
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[26] ={};// 用陣列統計左邊s的字母,大括號{}代表都是0
        for (char c : s) {
            H[c-'a'] += 1;
        }
        for (char c : t) {//c++進階
            H[c-'a'] -= 1; //用掉一個字母
        if ( H[c-'a'] < 0) return c;//這個字母不夠用,找到答案了!
        }
        return 0;
    }
};
