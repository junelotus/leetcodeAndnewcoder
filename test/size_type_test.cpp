#include <iostream>
#include <vector>
using namespace std;


int main(){
vector<char> re;

re.resize(8,'b');
for(int i=0;i<8;i++)
re[i] =(char)('a'+i);
vector<int>::size_type size = re.size();
cout<<size<<endl;
auto  it = re.begin();
cout<<&it<<endl;
//cout<<&re<<endl;

it++;
cout<<&it<<" "<<*it<<endl;
it++;
cout<<&it<<" "<<*it<<endl;
cout<<&(re[0])<<endl;
cout<<&(re[1])<<endl;
//it = 0x7fff02981d91;
return 0;






}
