//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>//��׼�㷨ͷ�ļ�
//
//void MyPrint(int ta)
//{
//	cout<<ta<<endl;
//}
//int main()
//{
//	//����vector�������󣬲���ͨ��ģ�����ָ�������д�ŵ����ݵ�����
//	vector<int> vecvalue;
//
//	//��������������
//	vecvalue.push_back(10);
//	vecvalue.push_back(20);
//	vecvalue.push_back(30);
//	vecvalue.push_back(40);
//	vecvalue.push_back(50);
//
//	//ÿ�����������Լ��ĵ��������������������������еĸ���
//	//vecvalue.bedin()���ص����������������ָ�������еĵ�һ������
//	//vecvalue.end()���ص����������������ָ�������е����һ��Ԫ�ص���һ��λ��
//	//vector<int>::iterator �õ�vector<int>������������������
//	vector<int>::iterator mpBegin=vecvalue.begin();
//	vector<int>::iterator mpEnd=vecvalue.end();
//
//	//��һ�ֱ�����ʽ
//	/*while (mpBegin!=mpEnd)
//	{
//		cout<<*mpBegin<<endl;
//		mpBegin++;
//	}*/
//
//	//�ڶ��ֱ�����ʽ
//	/*for (vector<int>::iterator tp=vecvalue.begin();tp!=vecvalue.end();tp++)
//	{
//		cout<<*tp<<endl;
//	}*/
//
//	//�����ֱ�����ʽ
//	//ʹ��STL��׼�����㷨 ����ͷ�ļ�#include<algorithm>
//	_For_each(vecvalue.begin(),vecvalue.end(),MyPrint);
//
//	system("pause");
//	return 0;
//}