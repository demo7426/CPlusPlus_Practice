#include<iostream>
using namespace std;

const float gPai=3.14f; 
class Circle//Բ��
{
public:
	Circle();//���캯��
	~Circle();//��������

	//����
	double m_r;

	//��Ϊ
	double m_s()//�ܳ�����
	{
		return 2*gPai*m_r;
	}
private:

};

Circle::Circle()
{
}

Circle::~Circle()
{
}
int main1()
{
	Circle ms;//��Բ��ʵ���������廯��
	ms.m_r=10;
	cout<<ms.m_s()<<endl;
	system("pause");
	return 0;
}