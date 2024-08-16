#include<iostream>
using namespace std;
int main()
{

    int arr[]= {34,2,5,4,3};
    int s=sizeof(arr)/sizeof(arr[0]);
    int max1 = 0;
    int max2= 0;
    for(int i=0;i<s;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        if(arr[i]>max2 && arr[i]<max1)
        {
            max2=arr[i];
        }
    }
    cout<<"second largest no="<<max2;
}
