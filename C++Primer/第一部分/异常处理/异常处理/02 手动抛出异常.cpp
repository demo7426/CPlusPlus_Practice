#include <iostream>
using namespace std;

int main()
{
	int* mp = (int*)malloc(8);
	if (mp==NULL)
	{
		cout << "内存没有分配成功" << endl;
		return -1;
	}
	mp[0] = 10;
	mp[1] = 20;
	cout << *mp << " " << *(mp + 1) << endl;
	free(mp);
	mp = NULL;

    int mNum, mNum2;//用来保存数据
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
			cout << terr.what() << "Try again? Enter yes or no" << endl;//terr.what()打印上面的那串string("Data must refer to same number\n")
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