//#include<iostream>
//using namespace std;
//#include<thread>
//
//void MyPrint()
//{
//	cout << "��ʼ�̣߳�" << endl;
//	///
//	cout << "�����̣߳�1" << endl;
//	cout << "�����̣߳�2" << endl;
//	cout << "�����̣߳�3" << endl;
//	cout << "�����̣߳�4" << endl;
//	cout << "�����̣߳�5" << endl;
//	cout << "�����̣߳�6" << endl;
//	cout << "�����̣߳�7" << endl;
//	cout << "�����̣߳�8" << endl;
//	cout << "�����̣߳�9" << endl;
//	cout << "�����̣߳�10" << endl;
//	cout << "�����̣߳�1" << endl;
//	cout << "�����̣߳�2" << endl;
//	cout << "�����̣߳�3" << endl;
//	cout << "�����̣߳�4" << endl;
//	cout << "�����̣߳�5" << endl;
//	cout << "�����̣߳�6" << endl;
//	cout << "�����̣߳�7" << endl;
//	cout << "�����̣߳�8" << endl;
//	cout << "�����̣߳�9" << endl;
//	cout << "�����̣߳�10" << endl;
//	cout << "�����̣߳�1" << endl;
//	cout << "�����̣߳�2" << endl;
//	cout << "�����̣߳�3" << endl;
//	cout << "�����̣߳�4" << endl;
//	cout << "�����̣߳�5" << endl;
//	cout << "�����̣߳�6" << endl;
//	cout << "�����̣߳�7" << endl;
//	cout << "�����̣߳�8" << endl;
//	cout << "�����̣߳�9" << endl;
//	cout << "�����̣߳�10" << endl;
//	cout << "�����̣߳�1" << endl;
//	cout << "�����̣߳�2" << endl;
//	cout << "�����̣߳�3" << endl;
//	cout << "�����̣߳�4" << endl;
//	cout << "�����̣߳�5" << endl;
//	cout << "�����̣߳�6" << endl;
//	cout << "�����̣߳�7" << endl;
//	cout << "�����̣߳�8" << endl;
//	cout << "�����̣߳�9" << endl;
//	cout << "�����̣߳�10" << endl;
//
//}
//int main()
//{
//	thread mth(MyPrint);
//	if (mth.joinable())//mth.joinable()�����ж�֮ǰ���߳��Ƿ�join()����detach()��
//	{
//		cout << "1��û�м�����߷�����̣߳�" << endl;
//	}
//	else cout << "1��֮ǰ������߷�����߳�" << endl;
//	//mth.join();//�������̣߳��ȴ��¿����߳�ִ���꣬��ִ�����߳�
//	mth.detach();//�������̷ֿ߳�����������ϵ���ֿ�ִ��(���߳�detach()֮�󣬲�����join(),��Ϊ�ᱨ�쳣)
//	
//	if (mth.joinable())//mth.joinable()�����ж�֮ǰ���߳��Ƿ�join()����detach()��
//	{
//		cout << "2��û�м�����߷�����̣߳�" << endl;
//	}
//	else cout << "2��֮ǰ������߷�����߳�" << endl;
//	cout << "���̵߳�ִ��1" << endl;
//	cout << "���̵߳�ִ��2" << endl;
//	cout << "���̵߳�ִ��3" << endl;
//	cout << "���̵߳�ִ��4" << endl;
//	cout << "���̵߳�ִ��5" << endl;
//	cout << "���̵߳�ִ��6" << endl;
//	cout << "���̵߳�ִ��7" << endl;
//	cout << "���̵߳�ִ��8" << endl;
//	cout << "���̵߳�ִ��9" << endl;
//	cout << "���̵߳�ִ��10" << endl;
//	cout << "���̵߳�ִ��11" << endl;
//	cout << "���̵߳�ִ��12" << endl;
//	cout << "���̵߳�ִ��13" << endl;
//	cout << "���̵߳�ִ��14" << endl;
//	cout << "���̵߳�ִ��1" << endl;
//	cout << "���̵߳�ִ��2" << endl;
//	cout << "���̵߳�ִ��3" << endl;
//	cout << "���̵߳�ִ��4" << endl;
//	cout << "���̵߳�ִ��5" << endl;
//	cout << "���̵߳�ִ��6" << endl;
//	cout << "���̵߳�ִ��7" << endl;
//	cout << "���̵߳�ִ��8" << endl;
//	cout << "���̵߳�ִ��9" << endl;
//	cout << "���̵߳�ִ��10" << endl;
//	cout << "���̵߳�ִ��11" << endl;
//	cout << "���̵߳�ִ��12" << endl;
//	cout << "���̵߳�ִ��13" << endl;
//	cout << "���̵߳�ִ��14" << endl;
//	cout << "���̵߳�ִ��1" << endl;
//	cout << "���̵߳�ִ��2" << endl;
//	cout << "���̵߳�ִ��3" << endl;
//	cout << "���̵߳�ִ��4" << endl;
//	cout << "���̵߳�ִ��5" << endl;
//	cout << "���̵߳�ִ��6" << endl;
//	cout << "���̵߳�ִ��7" << endl;
//	cout << "���̵߳�ִ��8" << endl;
//	cout << "���̵߳�ִ��9" << endl;
//	cout << "���̵߳�ִ��10" << endl;
//	cout << "���̵߳�ִ��11" << endl;
//	cout << "���̵߳�ִ��12" << endl;
//	cout << "���̵߳�ִ��13" << endl;
//	cout << "���̵߳�ִ��14" << endl;
//	cout << "���̵߳�ִ��1" << endl;
//	cout << "���̵߳�ִ��2" << endl;
//	cout << "���̵߳�ִ��3" << endl;
//	cout << "���̵߳�ִ��4" << endl;
//	cout << "���̵߳�ִ��5" << endl;
//	cout << "���̵߳�ִ��6" << endl;
//	cout << "���̵߳�ִ��7" << endl;
//	cout << "���̵߳�ִ��8" << endl;
//	cout << "���̵߳�ִ��9" << endl;
//	cout << "���̵߳�ִ��10" << endl;
//	cout << "���̵߳�ִ��11" << endl;
//	cout << "���̵߳�ִ��12" << endl;
//	cout << "���̵߳�ִ��13" << endl;
//	cout << "���̵߳�ִ��14" << endl;
//	cout << "���̵߳�ִ��1" << endl;
//	cout << "���̵߳�ִ��2" << endl;
//	cout << "���̵߳�ִ��3" << endl;
//	cout << "���̵߳�ִ��4" << endl;
//	cout << "���̵߳�ִ��5" << endl;
//	cout << "���̵߳�ִ��6" << endl;
//	cout << "���̵߳�ִ��7" << endl;
//	cout << "���̵߳�ִ��8" << endl;
//	cout << "���̵߳�ִ��9" << endl;
//	cout << "���̵߳�ִ��10" << endl;
//	cout << "���̵߳�ִ��11" << endl;
//	cout << "���̵߳�ִ��12" << endl;
//	cout << "���̵߳�ִ��13" << endl;
//	cout << "���̵߳�ִ��14" << endl;
//	system("pause");
//	return 0;
//}