//week03-2.cpp 學習計畫 Basic 第六題
//LeetCode 283.Move Zeroes
//把 0 移到右邊去, 等於[不是0的放左邊] 再補0
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0; //目標放在哪裡 num[k]
        for (int num: nums){ //C++進階 for 迴圈
            if (num !=0){
            nums[k] = num; //把數字放左邊
            k++; //換下一格
            }
        }
        //把殘留的,都變成0
        for (int i = k; i<nums.size();i++){
            nums[i]=0;
        }
    }
};
