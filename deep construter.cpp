#include<iostream>
using namespace std;
class atm
{
    int amount,*loc;
    public:atm(atm &t)
    {
        amount=t.amount;
        loc=new int;
        *loc=*(t.loc);
    }
    atm(int atm, int adrs)
    {
        amount=atm;
        loc=new int;
        loc=&adrs;
    }
    void transaction(int a)
    {
        amount=amount+a;
        *loc=*loc+1;
    }
    void show()
    {
        cout<<"Balance="<<amount<<"\t";
        cout<<"Location="<<*loc<<"\n";
    }
};
int main()
{
    atm mpnagar(10000,101);
    atm bhel(mpnagar);
    mpnagar.show();
    bhel.show();
    mpnagar.transaction(10000);
    mpnagar.show();
    bhel.show();

}
