#include<iostream>
using namespace std;
#include<vector>>
#include<algorithm>

class MyTransform
{
public:
	MyTransform() {};
	~MyTransform() {};
	int operator()(int ta)
	{
		return ta+1000;
	}
private:

};
void MyPrint(int tb)
{
	cout << tb << " ";
}
int main()
{
	vector<int>mvec01;
	for (int i = 0; i < 10; i++)
	{
		mvec01.push_back(i);
	}
	
	vector<int>mvecTransform;
	mvecTransform.resize(mvec01.size());//������������鸳��С����Ȼ���������ж�
	transform(mvec01.begin(),mvec01.end(),mvecTransform.begin(), MyTransform());//�ܹ��ڴ���Ĺ����н��в���
	for_each(mvecTransform.begin(),mvecTransform.end(), MyPrint);
	cout << endl;
	system("pause");
	return 0;
}