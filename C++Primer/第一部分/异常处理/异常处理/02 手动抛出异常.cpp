#include <iostream>
using namespace std;

int main()
{
	int* mp = (int*)malloc(8);
	if (mp==NULL)
	{
		cout << "�ڴ�û�з���ɹ�" << endl;
		return -1;
	}
	mp[0] = 10;
	mp[1] = 20;
	cout << *mp << " " << *(mp + 1) << endl;
	free(mp);
	mp = NULL;

    int mNum, mNum2;//������������
	while (cin >> mNum >> mNum2)
	{
		try
		{
			if (mNum != mNum2)
				throw runtime_error("Data must refer to same number\n");
			cout << "Sum = " << mNum + mNum2 << endl;
		}
		catch (const std::runtime_error terr)
		{
			cout << terr.what() << "Try again? Enter yes or no" << endl;//terr.what()��ӡ������Ǵ�string("Data must refer to same number\n")
			string mc;
			cin >> mc;
			if (!cin || mc=="no")
			{
				break;
			}
		}
	}
	return 0;
}