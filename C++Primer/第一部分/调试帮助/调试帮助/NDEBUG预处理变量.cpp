#include <iostream>
#include<cassert>
using namespace std;

#define NDEBUG
void Print(int tAge, string tStr, string tStr2 = "三国", string tStr3 = "大英雄")
{
#ifdef NDEBUG
	cout << tAge << tStr << tStr2 << tStr3 << endl;
	cout << __func__ << "定义了NDEBUG" << endl;
#else
	cout << tAge << tStr << tStr2 << tStr3 << endl;
	cout << __func__ << "没有定义NDEBUG" << endl;
#endif // !NDEBUG
	return;
}

int main()
{

	Print(18, "赵云");
	return 0;
}