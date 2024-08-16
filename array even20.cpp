#include<iostream>
using namespace std;
int man()
{
    int a[3][3];
    int r,c;
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            cin>>a[r][c];
        }
    }
    cout<<"output is \n";
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            if(a[r][c]%2==0)
            {
                cout<<a[r][c]<<"\t";
            }
        }
    }
}
