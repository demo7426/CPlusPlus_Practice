//#include<iostream>
//#include<future>
//
//using namespace std;
//
////std::shared_future<��������>����get���,std::future<��������>ֻ��getһ�� 
//double MyThread(double ta)//��һ���̣߳�д�����ݣ�
//{
//	cout << "��һ���߳̿�ʼִ�У�" << endl;
//	cout << "��һ�߳�id = " << std::this_thread::get_id << endl;
//	std::chrono::milliseconds mdura(3000);
//	std::this_thread::sleep_for(mdura);
//	cout << "��һ���߳�ִ����ϣ�" << endl;
//	return ta;
//}
//
//void MyThread2(std::shared_future<double> &ta)
//{
//	cout << "�ڶ����߳̿�ʼִ�У�" << endl;
//	cout << "�ڶ��̵߳�id = " << std::this_thread::get_id << endl;
//	cout << "��һ�̷߳���ֵΪ��" << ta.get() << endl;
//	cout << "��һ�̷߳���ֵΪ��" << ta.get() << endl;
//	cout << "�ڶ����߳�ִ����ϣ�" << endl;
//}
//
//int main()
//{
//	cout << "���̿�ʼִ��\n";
//	cout << "����id = " << std::this_thread::get_id << endl;
//	std::packaged_task<double(double)> mPatask(MyThread);
//	std::thread ms(std::ref(mPatask),5.2);
//	ms.join();
//
//	std::future<double> mResult = mPatask.get_future();
//	bool mValue = mResult.valid();//�ж�mResult�Ƿ�Ϊempty
//	//std::shared_future<double> mResult_s(std::move(mResult));
//	std::shared_future<double> mResult_s(mResult.share());
//	mValue = mResult.valid();
//	std::thread ms2(MyThread2, std::ref(mResult_s));
//	ms2.join();
//
//	cout << "����ִ�����\n";
//	return 0;
//}