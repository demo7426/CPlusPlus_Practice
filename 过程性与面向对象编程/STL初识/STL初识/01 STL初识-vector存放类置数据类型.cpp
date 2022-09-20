//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>//标准算法头文件
//
//void MyPrint(int ta)
//{
//	cout<<ta<<endl;
//}
//int main()
//{
//	//创建vector容器对象，并且通过模板参数指定容器中存放的数据的类型
//	vector<int> vecvalue;
//
//	//向容器放入数据
//	vecvalue.push_back(10);
//	vecvalue.push_back(20);
//	vecvalue.push_back(30);
//	vecvalue.push_back(40);
//	vecvalue.push_back(50);
//
//	//每个容器都有自己的迭代器，迭代器用来遍历容器中的个数
//	//vecvalue.bedin()返回迭代器，这个迭代器指向容器中的第一个数据
//	//vecvalue.end()返回迭代器，这个迭代器指向容器中的最后一个元素的下一个位置
//	//vector<int>::iterator 拿到vector<int>这种容器的数据类型
//	vector<int>::iterator mpBegin=vecvalue.begin();
//	vector<int>::iterator mpEnd=vecvalue.end();
//
//	//第一种遍历方式
//	/*while (mpBegin!=mpEnd)
//	{
//		cout<<*mpBegin<<endl;
//		mpBegin++;
//	}*/
//
//	//第二种遍历方式
//	/*for (vector<int>::iterator tp=vecvalue.begin();tp!=vecvalue.end();tp++)
//	{
//		cout<<*tp<<endl;
//	}*/
//
//	//第三种遍历方式
//	//使用STL标准遍历算法 包含头文件#include<algorithm>
//	_For_each(vecvalue.begin(),vecvalue.end(),MyPrint);
//
//	system("pause");
//	return 0;
//}