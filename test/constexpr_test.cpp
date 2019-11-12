#include <iostream>
#include <vector>
using namespace std;
int main()
{
constexpr int f = 10;
int arr1[f];
const int s =20;
int arr2[s];
int t ;
int arr3[t];//={1,2};
cout<<"wode"<<arr3[0]<<endl;
return 0;
/*在有些编译器种，不使用常量下标，并且不初始化数组的时候可以通过编译；不适用常量下标但是初始化数组　会报错*/
}
