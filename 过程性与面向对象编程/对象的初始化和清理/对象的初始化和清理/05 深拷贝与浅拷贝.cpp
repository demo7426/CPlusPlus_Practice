#include<iostream>
using namespace std;

//浅拷贝是在栈区执行
//深拷贝是在堆区执行
class person
{
public:
	person();
	person(int ta);
	person(const person& tb);
	~person();

	int m_Age;
	int* m_Height;
private:

};

person::person()//无参构造
{
	cout<<"普通构造函数的调用"<<endl;
}

person::person(int ta)//有参构造
{
	m_Age=ta;
	m_Height=new int(ta);
	cout<<"有参构造函数的调用"<<*m_Height<<endl;
}

person::person(const person& tb)//拷贝构造
{
	m_Age=tb.m_Age;
	//m_Height=tb.m_Height;//浅拷贝
	m_Height=new int(*tb.m_Height);//深拷贝，在堆区开辟位置存放数据

	cout<<"拷贝构造函数的调用"<<*m_Height<<endl;
}

person::~person()
{
	if (m_Height!=NULL)//删除两次开辟的堆区地址
	{
		delete m_Height;
		m_Height=NULL;
	}
	cout<<"析构函数的调用"<<endl;
}

void test05()
{
	person p7;
	person p5(10);
	person p6(p5);
}

int main()
{
	test05();
	system("pause");//终止，ms2来不及释放，关闭程序的一瞬间会调用析构函数
	return 0;
}