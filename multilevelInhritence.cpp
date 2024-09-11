//multilevel inheritance:- in a multilevel inheritance we create more than two classes and each sub classes inherit the property of previous class
#include<iostream>
using namespace std;
class RBI
{
    public:void rmsg()
    {
        cout<<"\n RBI\n";
    }
};
class SBI:public RBI
{
    public:void smsg()
    {
        cout<<"\n CUSTUMER\n";
    }
};
int main()
{
    cust c;
    c.cmsg();
    c.smsg();
    c.rmsg();
}
