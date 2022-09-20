//#include<iostream>
//using namespace std;
////多态可以实现地址晚绑定
////多态满足条件
////1、有继承关系
////2、子类重写父类中的虚函数（重写：函数返回值类型 函数名 参数列表 完全一致称为重写）
//class Animal
//{
//public:
//	Animal(){};
//	~Animal(){};
//	virtual void Speak()//虚函数
//	{
//		cout<<"动物在说话"<<endl;
//	}	
//private:
//
//};
//class cat:public Animal
//{
//public:
//	cat(){};
//	~cat(){};
//	virtual void Speak()
//	{
//		cout<<"小猫在说话"<<endl;
//	}
//private:
//
//};
////多态使用条件
////父类指针或引用指向子类对象
//void test01(Animal& ts01)
//{
//	ts01.Speak();
//}
//int main()
//{
//	cat ms01;
//	test01(ms01);
//	system("pause");
//	return 0;
//}