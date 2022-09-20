//#include<iostream>
//using namespace std;
//
//int MyAdd01(int ta,int tb)
//{
//	return ta+tb;
//}
//
//template<class T>
//T MyAdd02(T ta,T tb)
//{
//	return ta+tb;
//}
//
//void test01()
//{
//	int ma=10;
//	int mb=20;
//	char mc='d';
//   	cout<<MyAdd01(ma,mc)<<endl;
//	cout<<MyAdd02(ma,mb)<<endl;
//	//cout<<MyAdd02(ma,mc)<<endl;//自动推导，不会发生隐式类型转换
//	cout<<MyAdd02<int>(ma,mc)<<endl;//显示指定类型,会发生隐式类型转换
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}