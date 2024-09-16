
#include<iostream>
using namespace std;
int main()
{
     int a[2][3];
     int sum=0;
     for(int r=0;r<=1;r++)
     {
         for(int c=0;c<=2;c++)
         {
             cin>>a[r][c];
         }
     }
     cout<<"output is \n";

     for(int r=0;r<2;r++)
     {
         for(int c=0;c<3;c++)
         {

                    sum=sum+a[r][c];
                  cout<<a[r][c]<<"\t";


         }
         cout<<"\n";
     }
}
