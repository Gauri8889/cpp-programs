#include<iostream>
using namespace std;
int main()
{
    int n, k=2;

    cout<<"enter the prime no.\n";
      cin>>n;
      while(k<n)
    {
       if(n%k==0)

    cout<<"not prime\n";
    break;
}
else{
    cout<<"prime";
}
k++;
}
