// week08-3.cpp  學習計畫 Matrix 第三題 螺旋矩陣印出來  Medium 題
//LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // 我們知道 matrix[i][j] 左手i 右手j
        //往右、往下 vs. 往左、往上
        // j++ i++       j-- i--
        //另外有4個變數 left right up down
        vector<int> ans;
        int M=matrix.size(),N =matrix[0].size();//長、寬
        int left =0,right =N-1, up=0, down=M-1;
        while(ans.size()<M*N){
            for (int j=left;j<=right;j++) ans.push_back(matrix[up][j]);
            up++;
            
            for (int i= up;i<=down;i++)ans.push_back(matrix[i][right]);
            right--;

            if(ans.size()==M*N) break; //提早收齊, 結束囉

            for (int j=right;j>=left;j--) ans.push_back(matrix[down][j]);
            down--;

            for (int i=down;i>=up;i--) ans.push_back(matrix[i][left]);
            left++;
        }
        return ans;
    }
};
