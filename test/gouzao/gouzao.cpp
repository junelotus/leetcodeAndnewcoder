    #include<iostream>
    using namespace std;
     
    class Base
    {
    public:
    	Base()
    	{
    		Function();
    	}
     
    	virtual void Function()
    	{
    		cout << "Base::Fuction" << endl;
    	}
    };
     
    class A : public Base
    {
    public:
    	A()
    	{
    		Function();
    	}
     
    	virtual void Function()
    	{
    		cout << "A::Fuction" << endl;
    	}
    };
     
    int main()
    {
    	Base * a = new A ;
    //	Base * b=&a;
    	a->Function();
    return 0;
    }
