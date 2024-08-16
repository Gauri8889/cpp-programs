 #include<iostream>
 using namespace std;
 int main()
 {
     int a[]={3,3,5,4,6};
      int c=0;
     int len=sizeof(a)/sizeof(a[0]);
     for(int i=0;i<len;i++)
     {
         for(int j=i+1;j<len;j++)
         {
             if(a[i]==a[j])
             {
                 c++;
                 cout<<a[i]<<"\t";
             }
         }
     }
     cout<<"total dulpication value are:="<<c;
 }
