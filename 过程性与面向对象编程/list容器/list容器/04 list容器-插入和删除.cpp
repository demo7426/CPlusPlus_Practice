//#include<iostream>
//using namespace std;
//#include<list>
//
//void PrintList(list<int> tlis01)
//{
//	for(list<int>::iterator tp01=tlis01.begin();tp01!=tlis01.end();tp01++)
//	{
//		cout<<*tp01<<" ";
//	}
//	cout<<endl;
//}
//
////¸³Öµ²Ù×÷
//void test01()
//{
//	list<int> mlis01;
//	mlis01.push_back(10);
//	mlis01.push_back(20);
//	mlis01.push_back(30);
//	mlis01.push_back(40);
//
//	//±éÀúÈÝÆ÷
//	PrintList(mlis01);
//	
//	mlis01.push_front(100);
//	mlis01.push_front(200);
//	mlis01.push_front(300);
//	mlis01.push_front(400);
//	PrintList(mlis01);
//
//	mlis01.pop_back();
//	PrintList(mlis01);
//
//	mlis01.pop_front();
//	PrintList(mlis01);
//
//	mlis01.insert(++mlis01.begin(),10);
//	PrintList(mlis01);
//
//	mlis01.erase(mlis01.begin());
//	PrintList(mlis01);
//
//	mlis01.remove(10);
//	PrintList(mlis01);
//
//	mlis01.clear();
//	PrintList(mlis01);
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}