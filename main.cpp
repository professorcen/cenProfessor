#include <QCoreApplication>
#include <iostream>
using namespace std;

//类声明与定义
class ZuoYongYu
{
public:
    ZuoYongYu(int a);

    void fun1ZuoYongYu(int a)
    {
        cout<<"类作用域内的成员变量a:"<< a<< endl;
    }
    //声明两个public变量c,d
    static int c;
    static int d;

    //声明两个私有变量a,b;
private:
    int a;
    int b;
};

//类外定义构造函数,并且其中有类作用域::

ZuoYongYu::ZuoYongYu(int a)
{
  cout<<"ZuoYongYu 类型　构造函数："<<a<<endl;
}
//类外访问类中的成员变量
int ZuoYongYu::c;
int ZuoYongYu::d;


int main(int argc, char *argv[])
{
    //ZuoYongYu类的实例化,在类内的变量a,
    ZuoYongYu z1(100);
    //试试是否可以实现类中的private的成员变量ａ,b是否可以访问
//    z1.a;
//    z1.b;
    //试试是否可以实现类对象的public的成员变量c,d是否可以访问
    z1.c;
    z1.d;

    z1.fun1ZuoYongYu(100);

    QCoreApplication a(argc, argv);

    return a.exec();
}
