// week01-3.cpp學習計畫basic 第三題
//LeetCode 28. Find the Index of the First Occurrence in a String
// 大海撈針(難找)

class Solution {
public:
    //所有的題目,都可以用for(迴圈)if(判斷)函式呼叫
    int strStr(string haystack, string needle) {
        int N1 = haystack.length(), N2 = needle.length();//函式呼叫,字串的長度.length()
        for(int i= ;i<=N1-N2;i++){  //迴圈
            if(haystack.substr(i,N2)==needle)return i;//get answer
        }
        return -1;//can not found
    }
};
