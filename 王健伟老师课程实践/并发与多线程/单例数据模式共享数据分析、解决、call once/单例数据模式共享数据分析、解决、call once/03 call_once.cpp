//#include <iostream>
//#include<thread>
//#include<mutex>
//using namespace std;
//
//�������ģʽΪһ����ֻ�ܴ���һ������
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
//	static void CreatOnceInstance()//ֻ����һ��Instance
//	{
//		m_pInstance = new Person();
//		cout << "m_pInstance�������ˣ�\n";
//		static DeleteClass ms;
//	}
//public:
//	static Person* GetInstance()
//	{
//		std::call_once(gFlag , CreatOnceInstance);//CreatOnceInstance()����ֻ�ᱻִ��һ��(ͨ��gFlagֵ�ĸı������Ƶ�)
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
//		std::cout << "func()�������ã�" << std::endl;
//	}
//};
//Person* Person::m_pInstance = NULL;
//
//void MyThread()
//{
//	cout << "�߳̿�ʼ��" << endl;
//	Person* mp = Person::GetInstance();
//	mp->func();
//	cout << "�߳̽�����" << endl;
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
