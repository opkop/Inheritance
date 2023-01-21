#include <iostream>
using namespace std;

class A
{
protected:
    int a;
public:
    void setdata_a()
    {
        cout<<"Enter a value of a is ";
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
        cout<<"Enter a value of b is ";
        cin>>b;
    }
    void sum()
    {
        cout<<"The sum of a and b is"<<" "<<a+b<<endl;
    }
};
class C:public A
{
protected:
    int c;
public:
    void setdata_c()
    {
        cout<<"Enter a value of c is ";
        cin>>c;
    }
    void sum()
    {
        cout<<"The sum of a and c is"<<" "<<a+c<<endl;
    }
};
int main()
{
    B obj1;
    C obj2;
    obj1.setdata_a();
    obj1.setdata_b();
    obj2.setdata_c();
    obj1.sum();
    obj2.sum();

}