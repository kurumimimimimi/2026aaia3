// week05-3b.cpp 學習計畫 built function第1題
// leet code 58. tlength of last word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string now;
        while (ss >> now) {
        }
        return now.length();
    }
};
