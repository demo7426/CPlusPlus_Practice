//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person
//{
//	friend void Read(Person& t2);//全局函数做友元
//public:
//	Person();
//	~Person();
//	
//	void Build()
//	{
//		name="张三";
//		Id=20210716;
//	}
//	string name;
//private:
//	int Id;
//};
//
//void Read(Person& t2)
//{
//	t2.Build();
//	cout<<t2.name<<endl;
//	cout<<t2.Id<<endl;
//}
//
//Person::Person()
//{
//}
//
//Person::~Person()
//{
//}
//
//int main()
//{
//	Person s2;
//	Read(s2);
//	system("pause");
//	return 0;
//}