//week10-2a,cpp 學習計畫 Math 第一題
//LeetCode 1523.count odd numbers in an interval range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans=(high-low)/2;
        if(low%2==1||high%2==1)ans++;
        return ans;
    }
}
