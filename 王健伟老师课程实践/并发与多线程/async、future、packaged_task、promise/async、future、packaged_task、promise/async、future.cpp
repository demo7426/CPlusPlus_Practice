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
        std::cout << "线程开始！" << std::endl;
        std::cout << ta << std::endl;

        std::chrono::milliseconds mdura(3000);
        std::this_thread::sleep_for(mdura);

        std::cout << "线程id = " << std::this_thread::get_id() << std::endl;
        std::cout << "线程结束！" << std::endl;
        return 5;
    }
private:

};

int main()
{
    //一：std::async,std::future创建后台任务并返回值（希望线程返回值）
    //std::async 是一个函数模板，用来启动一个异步任务，启动异步任务之后，它返回一个std::future对象，std::future是一个类模板
    //std::future对象里面含有线程入口函数锁返回的值（线程返回的结果），我们可以通过调用future对象的成员函数的方法来显示出值
    MyThreadClass ms;
    int ma = 10;
    std::cout << "进程开始执行 " << "进程id = " << std::this_thread::get_id() << std::endl;
    //我们可以额外向std::async传递一个参数，该参数类型是std::launch类型（枚举类型），来达到一些特殊目的
        //a)std::launch::deferred表示线程入口函数调用被延迟到std::future的wait()或者get()函数;(且线程id和进程id一样，实质上成为了只有一个进程)
        //b)std::launch::async表示在调用std::async时立即执行（如果后面不写第一个参数，就默认为std::launch::async|std::launch::deferred参数）
		  //c)std::launch::async|std::launch::deferred由系统决定是异步（创建新线程）还是同步（不创建新线程）执行；
    std::future<int> mResult = std::async(std::launch::deferred,&MyThreadClass::MyThreadFunc,&ms,ma);
   
    std::cout << "continue............\n";
    std::cout << "continue............\n";
    std::cout << "continue............\n";
    std::cout << "continue............\n";
    std::cout << "continue............\n";

    std::cout << mResult.get() << std::endl;//卡在这里等待MyThreadFunc()返回一个值，拿到值之后才会继续执行
   // mResult.wait();//卡在这里等待线程执行完毕，不返回值
    return 0;
}
