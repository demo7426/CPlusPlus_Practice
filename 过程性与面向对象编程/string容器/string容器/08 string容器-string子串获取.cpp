#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string mstr01="hello";
	cout<<mstr01.substr(1,3)<<endl;

}

void test02()
{
	string mstr02="zhangsan@163.com";
	cout<<mstr02.substr(0,mstr02.find('@'))<<endl;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}