#include <iostream>
#include <deque>
using namespace std;

int main()
{
deque<int> dq;

dq.push_back(1);
dq.push_front(2);
cout<<dq.front()<<endl;
cout<<dq.back()<<endl;
return 0;

}
