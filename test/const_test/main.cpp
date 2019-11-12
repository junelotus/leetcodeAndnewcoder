#include <iostream>

int main(){
int i =0 ,&r =i;
 const int ci = i,&cr= ci;
//cr = 10;
//ci =55;
cr =66;

auto b = ci;
auto & c = ci;
//c = 5;
b = 10;
return 0;




}
