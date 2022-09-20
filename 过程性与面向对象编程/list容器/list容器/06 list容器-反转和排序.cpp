#include<iostream>
using namespace std;
#include<list>

void PrintList(list<int> tlis01)
{
	for(list<int>::iterator tp01=tlis01.begin();tp01!=tlis01.end();tp01++)
	{
		cout<<*tp01<<" ";
	}
	cout<<endl;
}

bool Compare(int tNum01,int tNum02)
{
	return tNum01>tNum02;
}

void test01()
{
	list<int> mlis01;
	mlis01.push_back(20);
	mlis01.push_back(10);
	mlis01.push_back(40);
	mlis01.push_back(30);

	//遍历容器
	PrintList(mlis01);

	cout<<"反转： "<<endl;
	mlis01.reverse();
	PrintList(mlis01);

	//所有不支持随机访问的迭代器，不可以用标准算法
	//不支持随机访问的迭代器,内部会提供一些对应的算法
	//sort(mlis01.begin(),mlis01.end());//错误
	cout<<"升序： "<<endl;
	mlis01.sort();
	PrintList(mlis01);

	cout<<"降序： "<<endl;
	mlis01.sort(Compare);
	PrintList(mlis01);
}


int main()
{
	test01();
	system("pause");
	return 0;
}