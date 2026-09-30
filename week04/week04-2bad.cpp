/// week04-2bad.cpp 這個程式是對的, 用進階C++迴圈
/// 但在CodeBlock 出錯,  warning ;range-based for only available with ...
///2011年之後,只有在-std=c++11或 -std=gnu+11 才能用
/// 所以,需要改一下設定
///下面是week04的考試題目 SOTT16_ADVANCNE_012
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int now=0;
	for (int i=0;i<20;i++){
		cin>>now;
		if (now==0) break;
		a.push_back(now);
	}
	int ans=0;
	cin>> now;
	for (int num: a){ /// 在CodeBlocks 設定出錯時, 永遠跑不出答案
		if (num==now)ans++;
	}
	cout << ans << "\n";
} ///截圖時,請把Build message 裡面的藍色的 warning 也截圖進來
