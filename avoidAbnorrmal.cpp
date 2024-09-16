#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"enter age\n";
    cin>>i;
    try
    {
        if(i==1)
        {
            throw i;
        }
        else if(i==2)
        {
            throw 'c';
        }
        else if(i==1)
        {
            throw float(1.2);
        }
        cout<<"welcome\n";
    }
    catch(int a)
    {
        cout<<"integer value";
    }
    catch(float f)
    {
        cout<<"float value";
    }
    catch(char c)
    {
        cout<<"char value";
    }
    catch(...)
    {
        cout<<"sarver error";
    }
    cout<<"\n go to the helllll";
}
