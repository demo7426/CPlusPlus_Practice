//#include<iostream>
//#include<list>
//#include<thread>
//
////�����⣨д���߶����꣩
//using namespace std;
//class CommonData
//{
//public:
//	CommonData() {};
//	~CommonData() {};
//
//	void InputData()
//	{
//		for (int i = 0; i < 1000000; i++)
//		{
//			m_ListCon.push_back(i);
//			cout << "д��list��������Ϊ��" << i << endl;
//		}
//	}
//
//	void OutputData()
//	{
//		for (int i = 0; i < 1000000; i++)
//		{
//			if (m_ListCon.empty())
//			{
//				cout << "����Ϊ�գ�" << endl;
//			}
//			else
//			{
//				cout << m_ListCon.front() << endl;//����������һ��Ԫ�ص�ֵ
//				m_ListCon.pop_front();//��ȡ֮����ɾ������������Ҫ��Ԫ����
//			}
//		}
//	}
//private:
//	std::list<int>m_ListCon;
//};
//
//
//int main()
//{
//	CommonData mObject;
//	thread mThreadFirst(&CommonData::InputData, &mObject);
//	thread mThreadSecond(&CommonData::OutputData,&mObject);
//	mThreadFirst.join();
//	mThreadSecond.join();
//
//	return 0;
//}