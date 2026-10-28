//week08-1b.cpp study plan matrix 第一題 最有錢的錢
//leetcode 1672. richest customer wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M= accounts.size(), N=accounts[0].size();
            int ans =0;
            for(int i=0;i<M;i++){
                int now =0;
                for(int j=0;j<N;j++){
                    now += accounts[i][j];

                }
                if(now>ans)ans=now;

            }
        return ans;
    }

};
