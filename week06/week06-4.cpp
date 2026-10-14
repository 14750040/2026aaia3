// week0694.cpp 學習計畫 Simulation 第一題
// LeetCode 682. Baseball Game
// 5: 陣列裡 5
// 2: 陣列裡 5 2
// C: 陣列裡 5 (刪掉了最後的2)
// D: 陣列裡 5 10 (把最後的5,變2倍, 塞入)
// +: 陣列裡 5 10 15 (最後2個數 5+10變15,塞入)
// 答案是,把所有的數據加起來
class Solution {
public:  // week02 教 string, week03教 vector<int>
    int calPoints(vector<string>& operations) {
        //遇到 Simulation 模擬, 就用for 迴圈,一步步做
        //week03 week04 教過C++進階for迴圈 for(char c : s) for (int num : a)
        vector<int>a;
        for (string s : operations){ //大資料結構vector裡, 裝小資料結構 string
            if(s=="C"){//字串string是雙引號,字母才是單引號
                a.pop_back();
            }else if(s=="D"){
                a.push_back(a[a.size()-1]*2);
            }else if(s=="+"){
                a.push_back(a[a.size()-2] + a[a.size()-1]);
            }else { //剩下的, 就是單純的放入數字(可能是很多位數的數字)
                //Google:　Ｃ++ string to int
                //有三種方法 可以把 string變int整數
                //a.push_back(stoi(s)); //方法1: stoi(s) 在C++最簡單的方法
                //a.push_back(atoi(s.c_str()) ); //方法2: atoi(s.c_str() ) 轉換成傳統C語言的方式
                //方法3:上週教過的 stringstream 字串便串流, 再流到答案裡
                int now;
                stringstream ss(s);
                ss  >> now;
                a.push_back(now);
            }
        }
        int ans = 0; //迴圈前面 ans 是0
        for (int num : a){
            ans+=num; //迴圈中間 ans 慢慢加
        }
        return ans; //迴圈後面 ans 拿來用
    }
};
