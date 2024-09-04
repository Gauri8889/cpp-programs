#include<iostream>
using namespace  std;
class atm
{
    public:atm(int cardon)
    {
        cout<<"CARD NO="<<cardon<<"\n";
    }
};
class customer:public atm
{
    public:customer(int c,int p):atm(c)
    {
        cout<<"PWD="<<p<<"\n";
    }
};

int main()
{
    customer paise(1001,2025);
}
