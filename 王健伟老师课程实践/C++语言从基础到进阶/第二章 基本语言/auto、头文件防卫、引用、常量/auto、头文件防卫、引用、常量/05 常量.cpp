#include <iostream>
using namespace std;

//���������ڱ������׶ξ�ִ��,���Ա��������еĳ����ܰ�������ʱ�ģ��ᱨ��
void test1()
{
    const int ma = 10;
    cout << ma << endl;
    int& mb = (int &)ma;
    mb = 15;
    cout << ma << endl;
    cout << mb << endl;
}

constexpr int func(int ta)
{
    ta = 30;
    return 30;
}
void test2()
{
    constexpr auto ma = 2;
    cout << ma << endl;
    int mc = 25;
    constexpr int mb = func(10);
    cout << mb << endl;
}
int main()
{
    test1();
    test2();
    std::cout << "Hello World!\n";
    return 0;
}
