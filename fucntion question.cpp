#include<iostream>
using namespace std;
void deposite(int pwd, int amount)
{
    if(pwd == 1234)
    if(amount<0){
        cout<<"please enter valid amount";
    }
    else{
        cout<<amount+1000;
    }else{
        cout<<"wrong pwd";
    }
}
int main()
{
    int amount,pwd;
    cout<<"please enter pwd";
    cin>>pwd;
    cout<<"please enter amount";
    cin>>amount;
    deposite(pwd,amount);
}
