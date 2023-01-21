#include<iostream>
using namespace std;

class A
{
	protected:
		int a;
	public:
		void setdata_a()
		{
			cin>>a;
		}		
};
class B:public A
{
	protected:
		int b;
	public:
		void setdata_b()
		{
			cin>>b;
		}
		
};
class C:public B
{
	protected:
		int c;
	public:
		void setdata_c()
		{
			cin>>c;
		}
		void sum()
		{
			cout<<"The addition of a b c is"<<" "<<a+b+c<<endl;
		}
		
};
int main()
{
	C obj;
	obj.setdata_a();
	obj.setdata_b();
	obj.setdata_c();
	obj.sum();
}