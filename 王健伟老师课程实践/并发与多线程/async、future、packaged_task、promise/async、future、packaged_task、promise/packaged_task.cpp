//#include <iostream>
//#include<thread>
//#include<future>
//#include<vector>
//
//using namespace std;
//double MyThreadFunc(int ta)
//{
//	std::cout << "�߳̿�ʼ��" << std::endl;
//	std::cout << ta << std::endl;
//
//	std::chrono::milliseconds mdura(3000);
//	std::this_thread::sleep_for(mdura);
//
//	std::cout << "�߳�id = " << std::this_thread::get_id() << std::endl;
//	std::cout << "�߳̽�����" << std::endl;
//	return 5.2;
//}
//
//vector<std::packaged_task<double(int)>> mVec;
//
//int main()
//{
//	//����std::packaged_task��������񣬰������װ����
//	//std::packaged_task �Ǹ���ģ�壬����ģ������Ǹ��ֿɵ��ö���ͨ��std::packaged_task���Ѹ��ֿɵ��ö����װ������������Ϊ�߳���ں���
//	
//	//1����һ��ʹ�÷���
//	//cout << "���̿�ʼ��" << endl;
//	//std::cout << "main�н���id = " << std::this_thread::get_id() << std::endl;
//	//std::packaged_task<double(int)> ms(MyThreadFunc);//���ǰ�MyThreadFuncͨ��packaged_task��װ����
//	//std::thread mThread(std::ref(ms),2);//�߳�ֱ�ӿ�ʼִ�У��ڶ���������Ϊ�߳���ں����Ĳ���
//	//mThread.join();//�ȴ��߳�ִ�����
//	//std::future<double> mResult = ms.get_future();//std::future�������߳���ں����ķ��ؽ���������mResult�������̵߳ķ���ֵ
//	//cout << mResult.get() << endl;
//	//cout << "���̽�����" << endl;
//
//	//2���ڶ���ʹ�÷�������lambda���ʽ��
//	//cout << "���̿�ʼ��" << endl;
//	//std::cout << "main�н���id = " << std::this_thread::get_id() << std::endl;
//	//std::packaged_task<double(int)> ms([](int ta) 
//	//	{
//	//		std::cout << "�߳̿�ʼ��" << std::endl;
//	//		std::cout << ta << std::endl;
//
//	//		std::chrono::milliseconds mdura(3000);
//	//		std::this_thread::sleep_for(mdura);
//
//	//		std::cout << "�߳�id = " << std::this_thread::get_id() << std::endl;
//	//		std::cout << "�߳̽�����" << std::endl;
//	//		return 5.2;
//	//	});
//	//std::thread mThread(std::ref(ms), 2);//�߳�ֱ�ӿ�ʼִ�У��ڶ���������Ϊ�߳���ں����Ĳ���
//	//mThread.join();//�ȴ��߳�ִ�����
//	//std::future<double> mResult = ms.get_future();//std::future�������߳���ں����ķ��ؽ���������mResult�������̵߳ķ���ֵ
//	//cout << mResult.get() << endl;
//	//cout << "���̽�����" << endl;
//
//	//3��������ʹ�÷�������lambda���ʽ����ms(2);����ֱ�ӵ���
//	//cout << "���̿�ʼ��" << endl;
//	//std::cout << "main�н���id = " << std::this_thread::get_id() << std::endl;
//	//std::packaged_task<double(int)> ms([](int ta)
//	//	{
//	//		std::cout << "�߳̿�ʼ��" << std::endl;
//	//		std::cout << ta << std::endl;
//
//	//		std::chrono::milliseconds mdura(3000);
//	//		std::this_thread::sleep_for(mdura);
//
//	//		std::cout << "�߳�id = " << std::this_thread::get_id() << std::endl;
//	//		std::cout << "�߳̽�����" << std::endl;
//	//		return 5.2;
//	//	});
//	//ms(2);//����ֱ�ӵ���
//	//std::future<double> mResult = ms.get_future();//std::future�������߳���ں����ķ��ؽ���������mResult�������̵߳ķ���ֵ
//	//cout << mResult.get() << endl;
//	//cout << "���̽�����" << endl;
//
//	//4��������ʹ�÷�������lambda���ʽ����ms(2);����ֱ�ӵ���,װ��vector������Ȼ����ȡ��
//	cout << "���̿�ʼ��" << endl;
//	std::cout << "main�н���id = " << std::this_thread::get_id() << std::endl;
//	std::packaged_task<double(int)> ms([](int ta)
//		{
//			std::cout << "�߳̿�ʼ��" << std::endl;
//			std::cout << ta << std::endl;
//
//			std::chrono::milliseconds mdura(3000);
//			std::this_thread::sleep_for(mdura);
//
//			std::cout << "�߳�id = " << std::this_thread::get_id() << std::endl;
//			std::cout << "�߳̽�����" << std::endl;
//			return 5.2;
//		});
//	mVec.push_back(std::move(ms));
//	std::vector<std::packaged_task<double(int)>>::iterator miter = mVec.begin();
//	std::packaged_task<double(int)> ms2;
//	ms2 = std::move(*miter);
//	mVec.erase(miter);
//	ms2(123);
//	std::future<double> mResult = ms2.get_future();//std::future�������߳���ں����ķ��ؽ���������mResult�������̵߳ķ���ֵ
//	cout << mResult.get() << endl;
//	cout << "���̽�����" << endl;
//
//	return 0;
//}
