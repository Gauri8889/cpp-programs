#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int &c=n;
    cout<<"c="<<c<<"\n";
    cout<<"n="<<n<<"\n";
    c++;
    cout<<"c="<<c<<"\n";
    cout<<"n="<<n<<"\n";
    n++;
    cout<<"c="<<c<<"\n";
    cout<<"n="<<n<<"\n";
}
