#include <iostream>
using namespace std;

//单例设计模式为一个类只能创建一个对象
class Person
{
public:
	~Person() {};

private:
	Person() {};
	static Person *m_pInstance;
public:
	static Person* GetInstance()
	{
		if (m_pInstance == NULL)
		{
			m_pInstance = new Person();
			static DeleteClass ms;
		}
		return m_pInstance;
	}

	class DeleteClass
	{
	public:
		DeleteClass() {};
		~DeleteClass() 
		{
			if (m_pInstance)
			{
				delete m_pInstance;
				m_pInstance = NULL;
			}
		};

	private:

	};

	void func()
	{
		std::cout << "func()函数调用！" << std::endl;
	}
};
Person *Person::m_pInstance = NULL;

int main()
{
	Person* mp = Person::GetInstance();
	//Person* mp2 = Person::GetInstance();//地址mp与mp2的值是一样的
	mp->func();
}
