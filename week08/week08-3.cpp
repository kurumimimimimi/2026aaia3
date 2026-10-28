// week08-3.cpp學習計畫matrix第三題
// leetcode 54. spiral matrix

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int M = matrix.size(), N = matrix[0].size();
        int left = 0, right = N - 1, up = 0, down = M - 1;
        while (ans.size() < M * N) {
            int i = up;
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[i][j]);
            }
            up++;

            int j = right;
            for (int i = up; i <= down; i++) {
                ans.push_back(matrix[i][j]);
            }
            right--;
            if (ans.size() == M*N) break;

            i = down;
            for (int j = right; j >= left; j--) {
                ans.push_back(matrix[i][j]);
            }
            down--;

            j = left;
            for (int i = down; i >= up; i--) {
                ans.push_back(matrix[i][j]);
            }
            left++;
        }
        return ans;
    }
};
