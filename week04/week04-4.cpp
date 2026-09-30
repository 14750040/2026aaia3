// week04-4.cpp 學習計畫 Basic 第七題
// LeetCode 66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        //int carry = 0;// 進位的英文
        int carry = 1; //因為一開始就要在最右邊+1
        for (int i = n-1; i >= 0; i--){ //倒過來的迴圈
            int now = digits[i] +carry;
            carry = now/10;// 進位
            digits[i] = now%10;//個為
        }
        //離開迴圈時, 竟然還有carry 要進位, 麻煩了!
        if (carry>0) digits.insert(digits.begin(),carry);
        return digits;
    }
};
