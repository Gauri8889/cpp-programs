#include<iostream>
using namespace std;
int main()
{
 for(int r=1;r<=5;r++)
 {

     for(int c=1;c<=r;c++)
     {
         if(r%2==0){
             cout<<char(c+64)<<"\t";
         }
         else{
            cout<<c<<"\t";
         }

     }
     cout<<"\n";
 }

 }

