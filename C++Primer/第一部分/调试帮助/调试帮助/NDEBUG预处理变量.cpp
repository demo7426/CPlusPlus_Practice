#include <iostream>
#include<cassert>
using namespace std;

#define NDEBUG
void Print(int tAge, string tStr, string tStr2 = "����", string tStr3 = "��Ӣ��")
{
#ifdef NDEBUG
	cout << tAge << tStr << tStr2 << tStr3 << endl;
	cout << __func__ << "������NDEBUG" << endl;
#else
	cout << tAge << tStr << tStr2 << tStr3 << endl;
	cout << __func__ << "û�ж���NDEBUG" << endl;
#endif // !NDEBUG
	return;
}

int main()
{

	Print(18, "����");
	return 0;
}