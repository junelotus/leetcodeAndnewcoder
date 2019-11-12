#include <iostream>
using namespace std;

class B{
public:
B(){}
~B(){cout<<"nide"<<endl;}
//privete:

};

class A{

public:
A(){ b =new B;}
//int * getarry(){return arry;}
static A*  createInstance();
static A* getInstance(){return instance;}
void setFirst(int wode){first =wode;}
int getFirst(){return first;}
B* getB(){return b;}
~A(){cout<<"wode"<<endl;first=0;}
private:
int first;
B *b;
static A * instance;

};

/*class B{
public:
B(){}
~B(){cout<<"nide"<<endl;}
privete:

};*/
A* A::instance=NULL;
A* A::createInstance()
{
if(instance==NULL)
instance = new A;
return instance;
}


int main()

{

A *b =A::createInstance();
{//A * a = &b;
//a->setFirst(8);
B* bb = b->getB();
//delete a;
delete bb;
}

//cout<<b.getFirst()<<endl;
//cout<<b.getarry()[0]<<endl;
return 0;

}
