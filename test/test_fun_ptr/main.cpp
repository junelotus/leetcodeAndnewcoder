#include <iostream>
using namespace std;
class A{
public:
bool set(){int t =0; return true;}
int * a =NULL;

};

int main()
{
A *test=new A();
int* dd = test->a;
//A::set;

A d;
//注意ReadData函数不用加括号，要加作用域和地址符
bool (A::*function)() = &A::set;
(d.*function)();

return 0;
}
