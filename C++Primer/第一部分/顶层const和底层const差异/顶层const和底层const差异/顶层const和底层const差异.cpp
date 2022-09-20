#include <iostream>

//顶层const与底层const的用途
void test(char* tp) {};
void test(char* const tp) {};
void test(const char* tp) {};
//考虑上述三个表达式，哪两个才是真正的函数重载？
//其实区分函数重载，要用调用者的身份来看或许更能说明问题
//底层指针常量需要的形参是一个常量，一个拥有顶层const的形参无法与另一个既没有顶层const、也没有底层const的形参区分开的，所以编译器在区分重载函数时会自动屏蔽顶层const
//所以上述三个表达式只有(1)(3)或(2)(3)才能组成真正的重载函数

//顶层const就是const定义变量本身就是一个常量，底层const就是const定义的变量所指向的对象是一个常量
int main()
{
	int mNum = 10;
	int mNum2 = 11;
	int* const mp = &mNum;//顶层const
	const int* mp2 = &mNum2;//底层const
	using s = int;
	s ms = 10;
	typedef int mName;
	mName ms2 = 10;
}