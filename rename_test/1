#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Base{
public:
Base(){};
void  fun(){cout<<"this is a Base fun"<<endl;}
void fun(int c){cout<<c<<endl;}
virtual void fun(string str) = 0;//{cout<<"this is a string"<<endl;};

};


class Drivered:public Base
{
public:
Drivered(){};
 void fun(){cout<<"this is a Drivered fun"<<endl;}
void fun(string str){cout<<"this is a string"<<endl;}
};

int main()
{
//using  Base;
Drivered d;
d.fun();
d.fun("wode");
return 0;


}
