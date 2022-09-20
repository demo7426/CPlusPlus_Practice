//#include <iostream>
//#include<thread>
//#include<mutex>
//using namespace std;
//
////单例设计模式为一个类只能创建一个对象
//std::mutex m_mutex;
//class Person
//{
//public:
//	~Person() {};
//
//private:
//	Person() {};
//	static Person* m_pInstance;
//public:
//	static Person* GetInstance()
//	{
//		if (m_pInstance == NULL)//双重检查
//		{
//			std::unique_lock<std::mutex> m_Lock(m_mutex);
//			if (m_pInstance == NULL)
//			{
//				m_pInstance = new Person();
//				static DeleteClass ms;
//			}
//			return m_pInstance;
//		}
//	}
//
//	class DeleteClass
//	{
//	public:
//		DeleteClass() {};
//		~DeleteClass()
//		{
//			if (m_pInstance)
//			{
//				delete m_pInstance;
//				m_pInstance = NULL;
//			}
//		};
//
//	private:
//
//	};
//
//	void func()
//	{
//		std::cout << "func()函数调用！" << std::endl;
//	}
//};
//Person *Person::m_pInstance = NULL;
//
//void MyThread()
//{
//	cout << "线程开始！" << endl;
//	Person* mp = Person::GetInstance();
//	mp->func();
//	cout << "线程结束！" << endl;
//}
//
//int main()
//{
//	thread ms(MyThread);
//	thread ms2(MyThread);
//	ms.join();
//	ms2.join();
//
//}
