///week02-3.cpp  使用 c++2011年新版的字串 stoi()功能
///在CodeBlock裡,必須開啟settting-comiler...把c++11打勾勾
#include <iostream>///cin cout讀入資料,印出資料
#include <string>///string字串的功能
using namespace std;///使用[命名空間]標準的std
int main()
{
	string a;///宣告字串a
	string ans;///宣告字串ans放答案用的
	cin>>a;///讀入字串a
	int N=a.length();///字串a的長度
	for(int i=N-1;i>=0;i--){///倒過來的迴圈
		ans+=a[i];///在迴圈哩,把a[i]塞到ans的後面
	}
	cout<<a<<'+'<<stoi(ans)<<'='<<stoi(a)+stoi(ans)<<endl;

}///stoi()is"string to int"把[字串]變成[整數]
