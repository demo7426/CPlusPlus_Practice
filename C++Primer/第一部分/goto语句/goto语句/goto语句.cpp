#include <iostream>

int main()
{
	size_t mNum = 10;
zhaoyun:
	{
		std::cout << "赵云" << std::endl;
	}

	switch (mNum)
	{
	case 10:
		//std::string mStr;
		int ma;
		std::cout << "10" << std::endl;
		goto zhaoyun;
		break;
	case 1:
		//mStr = "dfkjhtg";
		ma = 10;
		std::cout << ma << std::endl;
		break;
	default:
		break;
	}
	return 0;
}