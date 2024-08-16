#include<iostream>
using namespace std;
int main()
{
   for(int r=3; r>1; r--)
   {
       for(int c=1; c<=r; c++)
       {
           cout<<"*"<<"\t";
        }
        cout<<"\n";
   }
}

