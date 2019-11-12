#include <iostream>
using namespace std;
double find(double i,double j)
{
if(i+j==0.0) return 0;
return (i)/(i+j);
}


int main(){

double a  =0.0;
int t1=0,t2=0;
for(int i=0;i<=10;i++)
for(int j=0;j<=10;j++)
{

cout<<"i="<<i<<"  j="<<j<<endl;



double b =find(i,j)+find(10-i,10-j);

cout<<"b="<<b<<endl;

if(b>a)
{
	t1 =i;
	t2=j;
	a =b;
	
}




}

cout<<"t1="<<t1 <<"t2="<<t2<<" a="<<a<<endl;
return 0;

}
