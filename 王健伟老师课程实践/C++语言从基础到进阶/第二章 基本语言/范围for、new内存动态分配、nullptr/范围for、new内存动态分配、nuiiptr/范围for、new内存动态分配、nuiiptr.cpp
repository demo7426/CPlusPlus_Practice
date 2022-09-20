#include <iostream>
using namespace std;

void test()
{
    //范围for语句遍历
    int ma[] = { 11,12,15,19 };
    for (auto i : ma)
    {
        cout << i <<" ";
    }
    cout << "\n";
    for (auto i : {0,1,2,3,4,5,6,7,8,9})
    {
        cout << i << " ";
    }
    cout << "\n";
}
int main()
{
    test();
}

