#include<iostream>
using namespace std;
void deposite(int pwd, int amount)
{

    if(pwd==1234)

    {
        cout<<1000+amount;
    }
    else{
        cout<<"pwd not matched";
    }
}
int main()
{
    int p,a;
    cout<<"enter pwd\n";
    cin>>p;
    cout<<"enter amount in rs\n";
    cin>>a;
    deposite(p,a);
}
