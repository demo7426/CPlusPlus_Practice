#include<iostream>
using namespace std;
#include<string>

//�����ڶ����������ݣ�ͨ�������ָ��������������ã���Ҫ�ڸ��ഴ���������������ߴ��������������Ա�֤�������������ĵ���
class Animal
{
public:
	Animal();

	virtual ~Animal();//�����������������ⲿ���������岻��Ҫ��
	//����дΪ��virtual ~Animal()=0;//���鹹���������������ⲿ���������壩

	virtual void func()
	{}
private:

};

Animal::Animal()
{
	cout<<"�����޲ι��캯���ĵ���"<<endl;
}

Animal::~Animal()
{
	cout<<"�������������ĵ���"<<endl;
}
class Cat:public Animal
{
public:
	Cat(string tName01);
	virtual ~Cat();
	virtual void func()
	{
		cout<<"����func�ĵ���"<<endl;
	}
	string *m_Name;
private:

};

Cat::Cat(string tName01)
{
	m_Name=new string(tName01);
	cout<<"�������޲ι��캯���ĵ���"<<endl;
	cout<<"è�����ֽУ�"<<*m_Name<<endl;
}

Cat::~Cat()
{
	if (m_Name!=NULL)
	{
		delete m_Name;
		m_Name=NULL;
		cout<<"�������������ĵ���"<<endl;
	}
}
void test01()
{
	Animal *mp01=new Cat("Tom");
	mp01->func();
	delete mp01;
	mp01=NULL;
}
int main ()
{
	test01();
	system("pause");
	return 0;
}