//#include <iostream>
//#include<thread>
//#include<mutex>
//using namespace std;
//
////�������ģʽΪһ����ֻ�ܴ���һ������
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
//		if (m_pInstance == NULL)//˫�ؼ��
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
//		std::cout << "func()�������ã�" << std::endl;
//	}
//};
//Person *Person::m_pInstance = NULL;
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
