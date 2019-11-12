
#include <iostream>

using namespace std;

int testFunc1()
{
    int nTest1 = 23;

    auto f = [nTest1] (int a, int b) -> int
    {
        return a + b + 42 + nTest1;
        //nTest1 = 333;              不能在lambda表达式中修改捕获变量的值
    };

    cout << f(4, 3) << "&nTest1=" << nTest1 << endl;
}


void fnTest()
{
    int nTest1 = 23;

    auto f = [&nTest1] (int a, int b) -> int
    {
        cout << "In functor before change nTest=" << nTest1 << endl;    //nTest1=23333
        nTest1 = 131;
        cout << "In functor after change nTest=" << nTest1 << endl;     // nTest1 = 131
        return a + b + 42 + nTest1;
    };

    nTest1 = 23333;     

    cout << f(4, 3) << "&nTest1=" << nTest1 << endl;    
    cout << f(4, 3) << "&nTest1=" << nTest1 << endl;     //nTest1 = 23333
}
int main(){

fnTest();
return 0;

}