#include<stdio.h>
#include <iostream>
using namespace std;

int Function()
{
	std::ios_base::iostate mState = cin.rdstate();
	cin.clear();
	cin.setstate(mState);
	
	int ma;
	while (cin >> ma)
	{
		cout << ma;
		cin.clear(cin.failbit);
		cout << cin.fail();
	}
	return 0;
}

int main()
{
	Function();
	return 0;
}