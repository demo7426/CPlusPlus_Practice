//#include<iostream>
//#include<vector>
//#include<thread>
//
//using namespace std;
//
//vector<int>gVecSec = { 1,2,3 };
//
//void MyPrint(int ta)
//{
//	//cout << "�߳̿�ʼ��" << ta << endl;
//	cout << "���ʹ�������" << gVecSec[0] << gVecSec[1] << gVecSec[2] << endl;
//	//cout << "�߳̽�����" << ta << endl;
//}
//
//int main()
//{
//	vector<thread>mVecFirst;
//	for (int i = 0; i < 10; i++)
//	{
//		mVecFirst.push_back(thread(MyPrint,i));//�Ѷ���̷߳��������У����ù���
//	}
//	for (vector<thread>::iterator it = mVecFirst.begin() ; it < mVecFirst.end() ; it++)
//	{
//		it->join();//��it->detach();�����ȶ�
//	}
//
//	cout << "�������У�" << endl;
//	//���ݹ������⣺
//	//ֻ����ʱ��ʱ�ȫ��
//	//�����������߳���д���˸��߳��ڶ��������׳��ִ���������һ���߳���д��ʱ�������̲߳��ܶ���д��һ���߳��ڶ���ʱ�򣬾�����Ҫд(�����׳���)
//	return 0;
//}