#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter char";
    cin>>n;
    if(n>=65 && n<=90)
    {
        n=n+32;
        cout<<"Small char is"<<n<<"\n";

    }
    else{
        cout<<"The character is alredy in lovercase or not a latter"<<"/n";
    }
}
