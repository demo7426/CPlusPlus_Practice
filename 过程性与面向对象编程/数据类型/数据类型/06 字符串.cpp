#include<iostream>
#include<string>
using namespace std;

int main6()
{
	//C风格的字符串定义
	char str[]="Hello World";
	cout<<str<<endl;
	
	//C++风格的字符串定义
	string str2="because haha";//必须包含头文件，#include<string>
	cout<<str2<<endl;
	system("pause");
	return 0;
}