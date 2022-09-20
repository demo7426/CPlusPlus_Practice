//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person
//{
//	friend class Gay;
//public:
//	Person();
//	~Person();
//	
//	void Build()
//	{
//		name="уехЩ";
//		Id=20210716;
//	}
//	string name;
//private:
//	int Id;
//};
//
//Person::Person()
//{
//}
//
//Person::~Person()
//{
//}
//
//class Gay
//{
//public:
//	Gay();
//	~Gay();
//	void Read02(Person& t02)
//	{
//		t02.Build();
//		cout<<t02.name<<endl;
//		cout<<t02.Id<<endl;
//	}
//private:
//
//};
//
//Gay::Gay()
//{
//}
//
//Gay::~Gay()
//{
//}
//
//int main()
//{
//	Gay s03;
//	Person s04;
//	s03.Read02(s04);
//	system("pause");
//	return 0;
//}