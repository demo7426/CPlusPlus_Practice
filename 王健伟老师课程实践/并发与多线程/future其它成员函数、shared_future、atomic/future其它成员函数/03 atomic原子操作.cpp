//#include<iostream>
//#include<thread>
//#include<mutex>
//using namespace std;
//
////std::atomicֻ����Ե������
////mutex gMutex;������������Զ�����
//std::atomic<int> gNumber = 0;
////mutex gMutex;
//void MyThread()
//{
//	for (int i = 0; i < 1000000; i++)
//	{
//		//gMutex.lock();
//		gNumber++;
//		//gMutex.unlock();
//	}
//}
//
//int main()
//{
//	//ԭ�Ӳ���ֻ������++��--��+=��-=��*=��|=��^=�⼸�����������i = i + 1;�ǲ�����ԭ���Ե�
//	thread ms(MyThread);
//	thread ms2(MyThread);
//	ms.join();
//	ms2.join();
//	cout << "gNumber = " << gNumber << endl;
//
//	return 0;
//}