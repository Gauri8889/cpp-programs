#include<iostream>
using namespace std;
int main()
{
    for(int r=65;r<=67;r++)
    {
        for(int c=65; c<=r; c++)
        {
            cout<<char(c)<<"\t";
        }
        cout<<"\n";
    }
}
