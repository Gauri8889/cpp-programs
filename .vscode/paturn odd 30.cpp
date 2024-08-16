#include<iostream>
using namespace std;
int main()
{
 for(int r=1; r<=4;r++)
 {

        int a=1;
     for(int c=1;c<=r;c++)
     {

         cout<<a<<"\t";
         a=a+2;
     }
     cout<<"\n";
     }
 }
//output
1 
1 3
1 3 5 
1 3 5 7



