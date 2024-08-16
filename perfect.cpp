#include<iostream>
using namespace std;
int main()
{
    int n, s=0;
    cout<<"enter perfect no\n";
    cin>>n;
    for (int i = 1; i < n; i++)
    {
         if (n % i == 0)
         {
             s=+s+i;
         }
    }
    if(s==n)
    {
        cout<<n<<"is a perfect no";
    }
    else{
            cout<<"is a not perfect no";

    }



}
