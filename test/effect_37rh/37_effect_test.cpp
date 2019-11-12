#include <iostream>
#include <string>
using namespace std;
class shape{
public:
//shape(){};
enum shapeColor{red,green,blue};
void draw(shapeColor color = red )
{
doDraw(color);
}

private:
 virtual void doDraw (shapeColor color) const {cout<<"shape"<<endl;cout<<color<<endl;};
};


class rectangle:public shape{

public:
rectangle(){}
 private:

virtual void doDraw( shapeColor color=  green) const
{
cout<<"rectangle"<<endl;
cout<<color<<endl;
}

};

int main()
{
shape * rr = new shape;
rr->draw();
shape *r= new rectangle;
r->draw();//shape::green);
return 0;
}
