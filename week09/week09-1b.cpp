//week09-1b.cpp學習計畫 matrix第二題
//矩陣,希望對角線數字相加

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
    int N=mat.size();
    int ans=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j||i+j==N-1)ans+=mat[i][j];

        }
    }
    return ans;
    }
};
