// 类对象.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include<vector>

using namespace std;

class Person
{
public:
	Person() {};
	~Person() {};
	void Func() {};//成员函数(成员函数不占内存空间,他是跟着类走不会因为类对象的多少而发生变化)
	void Func2() {};//成员函数
	void Func3() {};//成员函数
private:

};

class Person2
{
public:
	Person2() {};
	~Person2() {};
	void Func() {};//成员函数(成员函数不占内存空间,他是跟着类走不会因为类对象的多少而发生变化)
	void Func2() {};//成员函数
	void Func3() {};//成员函数

	char m_a;
private:

};

void test()
{
	Person ms;
	int mLen = sizeof(ms);
	std::cout << "单独一个类所占内存大小为：" << mLen << "个字节" << std::endl;

	/*int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> mVec(std::begin(a),std::end(a));
	
	for (std::vector<int>::iterator tp = mVec.begin() ; tp < mVec.end() ; tp++)
	{
		cout << *tp <<" ";
	}
	cout << "\n";*/
}

void test2()
{
	Person2 ms2;
	int mLen = sizeof(ms2);//此时类所占内存为char字符一个字节的空间（如果为int整型，那么就占四个字节）;均为16进制
	std::cout << "Person2类所占空间大小为：" << mLen << "个字节" << std::endl;
	ms2.m_a = 'c';
	
}
int main()
{
	test();
	test2();
    return 0;
}
