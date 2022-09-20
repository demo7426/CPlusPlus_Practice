//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	Base(){};
//	~Base(){};
//	virtual void func()=0;//这样写之后Base类变为了抽象类（抽象类无法实例化对象）
//private:
//
//};
//class Son:public Base
//{
//public:
//	Son(){};
//	~Son(){};
//	virtual void func()
//	{
//		cout <<"子类的调用"<<endl;
//	}
//private:
//
//};
//
//void test01()
//{
//	//Base ms01;//抽象类无法实例化对象
//	//new Base;//抽象类无法实例化对象
//	Base *mp01=new Son;//父类通过指针或者引用调用子类成员
//	mp01->func();
//}
//int main ()
//{
//	test01();
//	system("pause");
//	return 0;
//}