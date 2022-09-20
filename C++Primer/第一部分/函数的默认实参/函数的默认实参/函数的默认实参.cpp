#include <iostream>
using namespace std;

void Print(int tAge, string tStr, string tStr2="三国", string tStr3="大英雄")
{
	cout << tAge << tStr << tStr2 << tStr3 << endl;
}

int main()
{
	Print(18, "赵云");
	return 0;
}