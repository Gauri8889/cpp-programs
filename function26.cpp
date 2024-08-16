#include<iostream>
using namespace std;
void deposite (int amount)//no return with parameter
{
    int a =1000;
    cout<<a+amount;

}
int main()
{
    int d;
    cout<<"enter amount in rs\n";
    cin>>d;
    deposite(d);
}
