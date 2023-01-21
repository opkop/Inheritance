#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    int setdata_a()
    {
        cin >> a;
        return (a);
    }
};
class B
{
	protected:
		int b;
	public:
		void setdata_b()
		{
			cin>>b;
		}

};
class C:private A,public B
{
	protected:
		int c;
	public:
		void setdata_c()
		{
			cin>>c;
		}
		void kalzang()
		{
			cout<<"The addition of a b c is"<<" "<<c+setdata_a()+b<<endl;
		}

};
int main()
{
	C obj;
	obj.setdata_b();
	obj.setdata_c();
	obj.kalzang();
}