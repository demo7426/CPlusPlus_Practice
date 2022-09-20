//#include<iostream>
//using namespace std;
//#include<list>
//
//void PrintList(list<int> tlis01)
//{
//	for(list<int>::iterator tp01=tlis01.begin();tp01!=tlis01.end();tp01++)
//	{
//		cout<<*tp01<<" ";
//	}
//	cout<<endl;
//}
//
////赋值操作
//void test01()
//{
//	list<int> mlis01;
//	mlis01.push_back(10);
//	mlis01.push_back(20);
//	mlis01.push_back(30);
//	mlis01.push_back(40);
//
//	//遍历容器
//	PrintList(mlis01);
//	
//	cout<<"list容器第一个元素： "<<mlis01.front()<<endl;
//	cout<<"list容器最后一个元素： "<<mlis01.back()<<endl;
//
//	list<int>::iterator mp01=mlis01.begin();
//	mp01++;
//	mp01--;
//
//	//mp01=mp01+2;//错误,list容器不支持随机访问
//	//mp01[1];	  //错误,list容器不支持随机访问
//	//mp01.at(2); //错误,list容器不支持随机访问
//
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}