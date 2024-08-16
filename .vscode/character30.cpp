#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"enter any capital character\n";
    cin>>c;
    if(c>=65 && c<=90)
    {
        cout<<char(c+32);
    }
}
