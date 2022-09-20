#include<iostream>
#include<string>
//#include <conio.h>
using namespace std;
class Bike_Class
{
public:
	string color;
	string brand;
	float price;
	static int N;

	Bike_Class() {};
	~Bike_Class() {};
	void Ride()
	{
		cout << "我正在骑行" << endl;
	};
	void Brake()
	{
		cout << "自行车刹车停止" << endl;
	};
	string Getcolor() const
	{
		return color;
	};
	string Getbrand() const
	{
		return brand;
	};
	float Getprice() const
	{
		return price;
	};
	void Output()
	{
		cout << "一共创造了" << N << "个自行车对象" << endl;/*尝试放在静态成员函数里*/
	};
};
int Bike_Class::N = 0;

class Warehouse
{
public:
	Bike_Class* m_p[100];//最多可以创建100个Bike_Class对象指针
	
	Warehouse()	{};
	~Warehouse() {};
};

int main()
{
	Warehouse ms;
	const int mNum = 100;//创建了100个Bike_Class对象指针，所以mNum=100；
	string mCommand;//输入操作指令
	std::size_t mArray_Pos = 0;//Bike_Class对象指针数组具体位置
	for (size_t i = 0; i < mNum; i++)
	{
		ms.m_p[i] = NULL;//防止野指针的出现
	}
	cout << "请输入新建、删除、遍历、或者结束操作指令" << endl;
	cin >> mCommand;
	while (1)
	{
		if (mCommand == "再次输入指令")
		{
			cout << "请再次输入指令" << endl; 
			cin >> mCommand;
		}
		if (mCommand == "新建")
		{
			ms.m_p[mArray_Pos] = new Bike_Class();
			cout << "请依次输入自行车的颜色、品牌和价格" << endl;
			cin >> ms.m_p[mArray_Pos]->color >> ms.m_p[mArray_Pos]->brand >> ms.m_p[mArray_Pos]->price;
			mArray_Pos++;//确保下一次存储的位置为数组下一位
			if (mArray_Pos == mNum)
			{
				cout << "存储空间已满，下一次无法继续新建对象" << endl;
			}
			else
			{
				cout << "新建成功" << endl;
			}
			mCommand = "再次输入指令";
		}
		if (mCommand == "删除")
		{
			int mDelete_Pos = 0;
			cout << "请输入具体想要删除的位置" << "0 到" << mNum-1 << endl;
			cin >> mDelete_Pos;
			if (ms.m_p[mDelete_Pos] == nullptr)
			{
				cout << "输入错误，该位置没有数据" << endl;
			}
			else
			{
				delete ms.m_p[mDelete_Pos];
				ms.m_p[mDelete_Pos] = NULL;
				cout << "删除成功" << endl;
			}
			mCommand = "再次输入指令";
		}
		if (mCommand == "遍历")
		{
			cout << "依次为颜色、品牌和价格" << endl;
			for (size_t i = 0; i < mNum; i++)
			{
				if (ms.m_p[i] != NULL)
				{
					cout << ms.m_p[i]->color << " " << ms.m_p[i]->brand << " " << ms.m_p[i]->price << endl;
				}
			}
			mCommand = "再次输入指令";
		}
		if (mCommand == "结束")
		{
			return 0;
		}
	}
}


