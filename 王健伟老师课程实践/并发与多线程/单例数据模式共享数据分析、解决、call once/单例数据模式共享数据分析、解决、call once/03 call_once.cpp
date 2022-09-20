//#include <iostream>
//#include<thread>
//#include<mutex>
//using namespace std;
//
//单例设计模式为一个类只能创建一个对象
//std::mutex m_mutex;
//std::once_flag gFlag;
//class Person
//{
//public:
//	~Person() {};
//
//private:
//	Person() {};
//	static Person* m_pInstance;
//
//	static void CreatOnceInstance()//只创建一次Instance
//	{
//		m_pInstance = new Person();
//		cout << "m_pInstance被创建了！\n";
//		static DeleteClass ms;
//	}
//public:
//	static Person* GetInstance()
//	{
//		std::call_once(gFlag , CreatOnceInstance);//CreatOnceInstance()函数只会被执行一次(通过gFlag值的改变来控制的)
//		return m_pInstance;
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
//Person* Person::m_pInstance = NULL;
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
