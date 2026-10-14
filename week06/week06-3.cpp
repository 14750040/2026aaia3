// week06-3.cpp 學習計畫 Simulation 第二題
// LeetCode 657. Robot Return to Origin
// 機器人 往上U 往下D 往左L 往右R, 問是否會回到原來位置
class Solution {
public:
    bool judgeCircle(string moves) {
        //城市在中間,上面三行不要動、下面兩行不要動
        int x=0,y=0;
        for (char c: moves){ //week06-2教 string 及 C++ 進階 for 迴圈
            if(c=='U') y++; //往上
            if(c=='D') y--; //往下
            if(c=='L') x--; //往右
            if(c=='R') x++; //往左
        }
        if(x==0 && y==0) return true;
        else return false;
    }
};
