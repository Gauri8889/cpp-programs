#include<iostream>
using namespace std;
int main()
{
    int k=0;
    for(int r=1;r<=3;r++)
    {
        for(int sp=3;sp>r;sp--)
        {
            cout<<" ";
        }
        for(int c=1; c<=r; c++)
        {
            k++;
            cout<<k;
        }
        cout<<"\n";
    }
}
