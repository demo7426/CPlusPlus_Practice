#include <iostream>
using namespace std;

void ErrorMsg(initializer_list<string> tInList)//initializer_list<string>里面存储的值均是const
{
	for (auto i : tInList)
	{
		cout << i << " ";
	}
	cout << endl;
}

int main()
{
	ErrorMsg({ "赵云","十万大军","七进七出" });
	return 0;
}
