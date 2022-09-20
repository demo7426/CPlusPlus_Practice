//#include<iostream>
//using namespace std;
//
////函数模板
//template<typename T>//声明一个模板，告诉编译器后面代码中紧跟着的T不要出错，T是一个通用数据类型
//void Swap(T &ta,T &tb)
//{
//	T mtemp=ta;
//	ta=tb;
//	tb=mtemp;
//}
//
//template<typename T>
//void func()
//{
//	cout<<"func 函数的调用"<<endl;
//}
//void test01()
//{
//	int ma=10;
//	int mb=20;
//	char mc='c';
//	Swap(ma,mb);
//	//Swap(ma,mc);//T无法确定具体类型
//	cout<<"ma= "<<ma<<endl;
//	cout<<"mb= "<<mb<<endl;
//	func<int>();//使用前指定T为int型
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}