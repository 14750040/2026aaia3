//week01-2.cpp SOIT106_ADVANCE_001
#include <iostream> ///C++ 的輸入資料, 功能強大 
int main()
{
	int n;
	std::cin >> n; ///C++ 輸入資料 標準::輸入 送到右邊n 
	int b = n, ans=0;
	while (n>0){
		ans= ans*10 + n%10;
		n=n/10;
	}
	///C++ 輸入資料, 將右邊的整數, 依序送到左邊 送出 
	std::cout << b << ans << b+ans; //WRONG-ANSWER
	/// 上面鏤了"+" 漏了"=" 又漏了跳行 
	//std:: cout << b << "+" << "=" << b+ans << std::endl;
	//std::cout << b << "+" << ans << "=" << b+ans << \n; ///也正確
	//printf("%d%d=%d\n",b,ans,ans+b);//大一下教的也可以
}	
