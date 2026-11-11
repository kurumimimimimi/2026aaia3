//week10-2b,cpp 學習計畫 Math 第一題
//LeetCode 1523.count odd numbers in an interval range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++){
            if(i%2==1) ans++;
        }
        return ans;
    }
};
