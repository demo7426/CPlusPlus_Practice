//#include<iostream>
//using namespace std;
//
////����ģ��
//template<typename T>//����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ����������
//void Swap(T &ta,T &tb)
//{
//	T mtemp=ta;
//	ta=tb;
//	tb=mtemp;
//}
//
//template<typename T>
//void MySort(T arr[],int len)//�����㷨
//{
//	for (int i = 0; i < len-1; i++)
//	{
//		for (int j = i; j < len-1; j++)
//		{
//			if (arr[i]<arr[j+1])
//			{
//				T mtemp=arr[i];
//				arr[i]=arr[j+1];
//				arr[j+1]=mtemp;
//			}
//		}
//	}
//	for (int i = 0; i < len; i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//}
//void test01()
//{
//	char arrChar[]={"bacdfe"};
//	int mNum01=sizeof(arrChar)/sizeof(char);
//	MySort(arrChar,mNum01);
//
//	int arrInt[]={2,5,6,8,1,0,3};
//	int mNum02=sizeof(arrInt)/sizeof(int);
//	MySort(arrInt,mNum02);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}