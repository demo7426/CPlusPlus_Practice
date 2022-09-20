//#include<iostream>
//#include<list>
//#include<thread>
//
////有问题（写或者读不完）
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
//			cout << "写入list容器数据为：" << i << endl;
//		}
//	}
//
//	void OutputData()
//	{
//		for (int i = 0; i < 1000000; i++)
//		{
//			if (m_ListCon.empty())
//			{
//				cout << "容器为空！" << endl;
//			}
//			else
//			{
//				cout << m_ListCon.front() << endl;//返回容器第一个元素的值
//				m_ListCon.pop_front();//读取之后又删除它，不再需要该元素了
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