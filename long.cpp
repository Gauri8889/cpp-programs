#include<iostream>
using namespace std;
int main()
{
long num,sum=0,i=1,j=0;
cout<<"enter any no";
cin>>num;
if(num<10)
{
    cout<<"sum of digit is"<<num;
}
else{
    sum=num%10;
    while(num>0)
    {
        i=(num%10);
        num=num/10;
    }
    cout<<"sum of digit"<<sum+i;
}
}
