#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    int r,c,sum;
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            cin>>a[r][c];
              sum=sum+a[r][c];
        }
    }
        cout<<sum;


    }

