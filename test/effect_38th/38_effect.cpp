/*虚函数是都都要重写 及时是private类型的*/


#include <iostream>
using namespace std;


class A{
public:
A(){}
//private:
virtual void fun(){cout<<"base"<<endl;}
};

class B:private A
{
public:
B(){}
//private:
void func(){fun();}

};


class C:public B
{
public:
C(){}
virtual void fun(){cout<<"grandson"<<endl;}	


};

int main()
{
A a;
B * b = new C;
b->func();
C * c =new C;
c->fun();

return 0;
}
