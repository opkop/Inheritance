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
class B:private A
{
protected:
    int b;
public:
    int setdata_b()
    {
        cin >> b;
    }
    void sum()
    {
        cout<<"The sum of a and b is"<<" "<<b+setdata_a()<<endl;
    }
};
int main()
{
    B obj;
    //obj.setdata_a();
    obj.setdata_b();
    obj.sum();

}