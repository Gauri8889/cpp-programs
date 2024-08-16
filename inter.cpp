#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cout<<"enter any num\n";
    cin>>n;
    while(n>0){
      s=s+(n%10);
      n=n/10;
    }
    cout<<"sum of digit="<<s;



}
