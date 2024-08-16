#include<iostream>
using namespace std;
int pw(int b,int p)
{
    if(p==0)
    {
        return 1;
    }
    if(b==0)
    {
        return 0;
    }
    return b*pw(b,p-1);
}
int main()
{
    int p,b;
    cout<<"enter base\n";
    cin>>b;
    cout<<"enter power\n";
    cin>>p;
    cout<<pw(b,p);
}
