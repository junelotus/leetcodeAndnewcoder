#include <iostream>
using namespace std;
int main()
{
 int volatile const  a =10;
int volatile  const *p = &a;

//*q =30;
int volatile  *q = const_cast<int volatile *>(p);
*q =20;//关于ａ值的改变，如果不加volatile关键字，则直行编译期常量优化，读取a的值的时候实在寄存器中，而不是在内存中，内存中经过此条语句，已经变成了２０

cout<<"q="<<*q<<" p="<< *p<<" a ="<<a<<endl;

return 0;
}
