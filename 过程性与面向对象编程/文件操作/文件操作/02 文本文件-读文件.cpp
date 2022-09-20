//#include<iostream>
//using namespace std;
//#include<fstream>
//#include<string>
//
//void test01()
//{
//	fstream ifs;
//	ifs.open("text.txt",ios::in);//如果不写具体位置，则默认在程序目录下创建
//	
//	if (!ifs.is_open())
//	{
//		cout<<"文件读取失败"<<endl;
//	}
//
//	//读取文件
//	//第一种方法
//	char buf[1024]={0};
//	while (ifs>>buf)
//	{
//		cout<<buf<<endl;
//	}
//
//	//第二种方法
//	/*char buf[1024]={0};
//	while (ifs.getline(buf,sizeof(buf)))
//	{
//		cout<<buf<<endl;
//	}*/
//
//	//第三种方法
//	/*string mc;
//	while (getline(ifs,mc))
//	{
//		cout<<mc<<endl;
//	}*/
//
//	//第四种方法
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