#include<iostream>
using namespace std;
int main()
{
    int base,power,r=1;
    cout<<"enter base\n";
    cin>>base;
    cout<<"enter power\n";
    cin>>power;
    while(power>=1)
    {
        r=r*base;
        power--;
    }
    cout<<"result="<<r;
}

