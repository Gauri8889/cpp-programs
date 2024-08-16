//lower case to upper case
#include<iostream>
using namespace std;
int main()
{
    //upper case to lower case
  string str = "HELLO";
  for(int i=0; i<str.length();i++)
  {
      if(str[i]>='A' && str[i]<='Z')
      {
          str[i]=str[i]-'A'+'a';
      }
  }
  cout<<str;
}
