#include<iostream>
using namespace std;
class RBI
{
    const int rate,amount;
    public:RBI(int r,int a):rate(r),amount(a)
    {
        cout<<rate<<"\n";
        cout<<amount<<"\n";
    }
};
int main()
{
    RBI sbi(8,10000000);
    RBI axis(14,1000000);
}
