#include<iostream>
using namespace std;
int main()
{
    int a,s,f;
    cout<<"enter any no\n";
    cin>>a;
    f=a%10;
    while(a>0)
    {
       s=a%10;
       a=a/10;
    }
    cout<<"sum of first & last digit="<<f+s;
}
