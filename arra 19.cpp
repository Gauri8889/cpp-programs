#include<iostream>
 using namespace std;
 int main()
 {
     int a[]={3,7,3,5,4,6};
      int i,j;
     int len=sizeof(a)/sizeof(a[0]);
     for(i=0;i<len;i++){
        for(j=0;j<len;j++)
     {
         if(a[i]==a[j])
         {
             break;
         }
     }
     if(i==j)
     {
         cout<<a[i]<<"\t";
     }
     }
 }

