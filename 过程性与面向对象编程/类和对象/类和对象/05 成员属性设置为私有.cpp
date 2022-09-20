#include<iostream>
using namespace std;
#include<string>

class Person5
{
public:
	Person5();
	~Person5();
	void SetName(string tName)//设置名字
	{
		m_Name=tName;
	}
	void GetName()//获取名字
	{
		cout<<m_Name<<endl;
	}

	void ReadAge()//读取年龄
	{
		int mAge=18;
		cout<<mAge<<endl;
	}

	void SetStarName(string tName1)//设置明星名字
	{
		m_Star=tName1;
	}

private:
	string m_Name;//名字  开端口，能够读写
	int m_Age;//年龄      开端口，只能读
	string m_Star;//明星  开端口，只能写
};

Person5::Person5()
{
}

Person5::~Person5()
{
}

int main5()
{
	Person5 ms;
	ms.SetName("张三");
	ms.GetName();
	ms.ReadAge();
	ms.SetStarName("科比");

	system("pause");
	return 0;
}