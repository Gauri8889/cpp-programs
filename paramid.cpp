#include<iostream>
using namespace std;
int main()
{
    for(int r=1;r<=5;r++)
    {
        for(int sp=1;sp<r;sp++)
        {
            cout<<" ";
        }
        for(int c=5; c>=r; c--)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
