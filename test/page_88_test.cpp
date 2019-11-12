#include <iostream>
using namespace std;

class A{

public:
//A(){}

A(int aa,int bb):a(aa),b(bb)
{}
A():a(10),b(11){}
private:
int a =0  ;
int b={1} ;

};

class B{

private:
A a{1,2};
A b;
};

int main()
{
A aa;
A bb(0,1);
//A cc(2,3);
//heh
return 0;
}
