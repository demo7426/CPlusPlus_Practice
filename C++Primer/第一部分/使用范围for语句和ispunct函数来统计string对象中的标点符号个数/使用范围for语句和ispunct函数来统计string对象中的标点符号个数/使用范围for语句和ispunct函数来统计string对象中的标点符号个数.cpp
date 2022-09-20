#include <iostream>
#include<string>

using namespace std;

int main()
{
	string mStr("Hello World!!!");
	decltype(mStr.size()) mNum = 0;
	
	for (auto ic : mStr)//遍历mStr中的每一个字符
	{
		if (ispunct(ic))//如果该字符是标点符号
		{
			mNum++;
		}
	}
	cout << mNum << " " << mStr << endl;
	return 0;
}

