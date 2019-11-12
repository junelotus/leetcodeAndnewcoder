#include <iostream>
#include <vector>
#include<map>
using namespace std;

int main(){
map<int,int> o;
for(int i=10;i>=0;i--)
o[i] =10-i;

map<int,int>::iterator it =o.begin();
while(it!=o.end()){
cout<<it->first<<" "<<it->second<<endl;
it++;
}return 0;




}

/*根据key值排序的*/
