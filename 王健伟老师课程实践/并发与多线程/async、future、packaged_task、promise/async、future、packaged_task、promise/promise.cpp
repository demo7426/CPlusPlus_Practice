//#include <iostream>
//#include<thread>
//#include<future>
//#include<vector>
//
//using namespace std;
//void MyThreadFunc(std::promise<int> &ta,int tb)
//{
//	cout << "�߳̿�ʼ��" << endl;
//	tb *= 10;
//
//	std::chrono::milliseconds mdura(3000);
//	std::this_thread::sleep_for(mdura);
//
//	ta.set_value(tb);
//	cout << "�߳̽�����" << endl;
//	return;
//}
//
//vector<std::packaged_task<double(int)>> mVec;
//
//int main()
//{
//	//����std::promise�Ǹ���ģ��
//	//�����ܹ���ĳ���߳��и�ֵ��Ȼ�����ǿ����������߳��У������ֵȡ������
//	//�ܽ᣺ͨ��promise����һ��ֵ���ڽ�����ĳ��ʱ�����ǿ���ͨ����future�󶨵����promise�����õ�����󶨵�ֵ
//	cout << "���̿�ʼ��" << endl;
//	std::promise<int> ma;
//	std::thread mThread(MyThreadFunc,std::ref(ma),180);
//	mThread.join();
//	std::future<int> mResult = ma.get_future();
//	cout << mResult.get() << endl;
//	cout << "���̽�����" << endl;
//	
//	return 0;
//}
