#include<iostream>
using namespace std;
int main()
{
    int n,c;
    cout<<"enter any charracter\n";
    cin>>n;
    cout<<"select v for vowel/consnant and G for gender\n";
    cin>>c;
    switch(c)
    case 'v':
    {
        if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
        {
        cout<<"enter vowel no";
        }
        else{
            cout<<"consonant";
        }
        break;
    }
    case 'g':
    {
        if(n=='m'||n=='M')
        {
            cout<<"male";
        }
        else if(n=='f'||n=='F')
        {
            cout<<"female";
        }
        else
        {
            cout<<"other";
        }
         break;
    }

    default:
    {
        cout<<"invalid choice";
    }
}

