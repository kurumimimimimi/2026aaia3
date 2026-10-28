//week08-1a.cpp study plan matrix 第一題 最有錢的錢
//leetcode 1672. richest customer wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(vector<int>a:accounts){
            int now=0;
            for(int num:a){
                now +=num;
            }
            ans =max(ans, now);
        }
        return ans;
    }
};
