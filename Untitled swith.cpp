// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
  int p,r,t,c;
  cout<<"enter three values\n";
  cin>>p>>r>>t;
  cout<<"select 1 for interest and 2 for largest no\n";
  cin>>c;
  switch(c)
  {
      case 1:
      {
          cout<<"simple interest="<<(p*r*t)/100;
          break;
      }
case 2:
{
    if(p>r && p>t)
    {
        cout<<p<<"is max";
    }
    else{
        cout<<t<<"is max";
    }
    break;
}
default:
{
    cout<<"invalid choise";
}
  }
}
