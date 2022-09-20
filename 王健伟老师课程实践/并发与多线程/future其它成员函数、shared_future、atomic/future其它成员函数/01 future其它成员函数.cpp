#include <iostream>
#include<thread>
#include<future>

class MyThreadClass
{
public:
    MyThreadClass() {};
    ~MyThreadClass() {};
   
    int MyThreadFunc(int ta)
    {
        std::cout << "�߳̿�ʼ��" << std::endl;
        std::cout << ta << std::endl;

        std::chrono::milliseconds mdura(3000);
        std::this_thread::sleep_for(mdura);

        std::cout << "�߳�id = " << std::this_thread::get_id() << std::endl;
        std::cout << "�߳̽�����" << std::endl;
        return 5;
    }
private:

};

int main()
{
    /*һ��std::async,std::future������̨���񲢷���ֵ��ϣ���̷߳���ֵ��
    std::async ��һ������ģ�壬��������һ���첽���������첽����֮��������һ��std::future����std::future��һ����ģ��
    std::future�������溬���߳���ں��������ص�ֵ���̷߳��صĽ���������ǿ���ͨ������future����ĳ�Ա�����ķ�������ʾ��ֵ*/
    MyThreadClass ms;
    int ma = 10;
    std::cout << "���̿�ʼִ�� " << "����id = " << std::this_thread::get_id() << std::endl;
    /*���ǿ��Զ�����std::async����һ���������ò���������std::launch���ͣ�ö�����ͣ������ﵽһЩ����Ŀ��
        a)std::launch::deferred��ʾ�߳���ں������ñ��ӳٵ�std::future��wait()����get()����;(���߳�id�ͽ���idһ����ʵ���ϳ�Ϊ��ֻ��һ������)
        b)std::launch::async��ʾ�ڵ���std::asyncʱ����ִ�У�������治д��һ����������Ĭ��Ϊstd::launch::async������*/
    std::future<int> mResult = std::async(&MyThreadClass::MyThreadFunc,&ms,ma);
   
    std::cout << "continue............\n";
    std::cout << "continue............\n";
    std::cout << "continue............\n";
    std::cout << "continue............\n";
    std::cout << "continue............\n";

    //std::future_status ö������
    std::future_status mStatus = mResult.wait_for(std::chrono::seconds(1));//wait_for()���̵ȴ��߳�һ��ʱ��

    //������future_status�ж��Ƿ�ɹ������첽�����̣߳�����
    if (mStatus == std::future_status::timeout)
    {
        std::cout << "�̻߳�û��ִ����ϣ�" << std::endl;
    }
    else if (mStatus == std::future_status::ready)
    {
        std::cout << "�߳��Ѿ�ִ����ϣ����ҷ���ֵ��" << std::endl;
        std::cout << mResult.get() << std::endl;//��������ȴ�MyThreadFunc()����һ��ֵ���õ�ֵ֮��Ż����ִ��
    }
    else if (mStatus == std::future_status::deferred)
    {
        std::cout << "δ�������̣߳��̱߳��ӳ�ִ�У�" << std::endl;
        std::cout << mResult.get() << std::endl;//��������ȴ�MyThreadFunc()����һ��ֵ���õ�ֵ֮��Ż����ִ��
    }
    mResult.wait();//��������ȴ��߳�ִ����ϣ�������ֵ
    return 0;
}