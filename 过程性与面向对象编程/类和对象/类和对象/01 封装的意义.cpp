#include<iostream>
using namespace std;

const float gPai=3.14f; 
class Circle//圆类
{
public:
	Circle();//构造函数
	~Circle();//析构函数

	//属性
	double m_r;

	//行为
	double m_s()//周长函数
	{
		return 2*gPai*m_r;
	}
private:

};

Circle::Circle()
{
}

Circle::~Circle()
{
}
int main1()
{
	Circle ms;//将圆类实例化（具体化）
	ms.m_r=10;
	cout<<ms.m_s()<<endl;
	system("pause");
	return 0;
}