
// week06-4.cpp 學習計畫 simulation第1題
// leetcode 682.baseball-game
// 5:陣列裡 5
// 2:陣列裡 5 2
// C:陣列裡 5 刪掉最後的2
// D:陣列裡 5 10
// +:陣列裡 5 10 15
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for (string s : operations) {
            if (s == "C") {
                a.pop_back();
            } else if (s == "D") {
                a.push_back(a[a.size() - 1] * 2);
            } else if (s == "+") {
                a.push_back(a[a.size() - 2] + a[a.size() - 1]);
            } else {
                // google:C++ string to int
                // a.push_back(stoi(s));
                // a.push_back(atoi(s.c_str()));
                int now;
                stringstream ss(s);
                ss >> now;
                a.push_back(now);
            }
        }
        int ans = 0;
        for (int num : a) {
            ans += num;
        }
        return ans;
    }
};
