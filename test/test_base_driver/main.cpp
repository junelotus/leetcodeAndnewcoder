#include<iostream>
using namespace std;
class A{
private:
int a;
int aa;
float dd;


};

class B:protected A{
private:
int a;
int aa;


};

int main()
{
    cout<<sizeof(A)<<endl;
    cout<<sizeof(B)<<endl;
    return 0;


}