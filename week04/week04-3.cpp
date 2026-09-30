// week04-3.cpp 學習計畫 Basic 第10題
//Leet Code 896.monotonic array
//只會增加,減少的陣列,沒有變化
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
    int red=0,green=0;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]<nums[i+1])red++;
        if(nums[i]>nums[i+1])green++;
    }
    if(red==0||green==0)return true;
    return false;
    }
};
