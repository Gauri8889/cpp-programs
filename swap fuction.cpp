#include<iostream>
using namespace std;
void Greater(int a,int b )
{
    if(a>b)
    {
        cout<<"a is greter\n"<<a;
    }
    else{
      cout<<"b is greater\n"<<b;
    }
}
int main(){
int a,b;
cin>>a>>b;
  Greater(a,b);
}
