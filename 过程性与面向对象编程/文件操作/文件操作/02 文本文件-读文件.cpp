//#include<iostream>
//using namespace std;
//#include<fstream>
//#include<string>
//
//void test01()
//{
//	fstream ifs;
//	ifs.open("text.txt",ios::in);//�����д����λ�ã���Ĭ���ڳ���Ŀ¼�´���
//	
//	if (!ifs.is_open())
//	{
//		cout<<"�ļ���ȡʧ��"<<endl;
//	}
//
//	//��ȡ�ļ�
//	//��һ�ַ���
//	char buf[1024]={0};
//	while (ifs>>buf)
//	{
//		cout<<buf<<endl;
//	}
//
//	//�ڶ��ַ���
//	/*char buf[1024]={0};
//	while (ifs.getline(buf,sizeof(buf)))
//	{
//		cout<<buf<<endl;
//	}*/
//
//	//�����ַ���
//	/*string mc;
//	while (getline(ifs,mc))
//	{
//		cout<<mc<<endl;
//	}*/
//
//	//�����ַ���
//	/*char a;
//	while ((a=(ifs.get()))!=EOF)
//	{
//		cout<<a;
//	}*/
//	ifs.close();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}