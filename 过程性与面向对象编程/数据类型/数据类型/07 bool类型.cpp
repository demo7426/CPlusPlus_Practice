#include<iostream>
#include<string>
using namespace std;

int main7()
{
	bool flag=true;//代表为真，1
	cout<<flag<<endl;

	flag=false;//代表为假，0
	cout<<flag<<endl;
	cout<<"bool所占字节大小："<<sizeof(flag)<<endl;
	system("pause");
	return 0;
}