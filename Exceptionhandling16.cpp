#include<iostream>
using namespace std;
// Exception :Abnormal condition
// Exception Handling: is used to avoid abnormal condition
int main()
{
    int a,b;
    cout<<"enter 2 no\n";
    cin>>a>>b;
    try
    {
        if(b==0)
        {
            throw b;
        }
        cout<<a/b;
    }
    catch(int e)
    {
        cout<<"\n denominator can not be zero";
    }
    cout<<"\n done";
}
