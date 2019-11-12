#include <iostream>
using namespace std;


template<unsigned n>
struct f{
enum{value =n*f<n-1>::value};


};
template<>
struct f<0>
{
enum{value =1};
};

int main()
{

cout<<f<5>::value<<endl;
cout<<f<10>::value<<endl;
return 0;

}
