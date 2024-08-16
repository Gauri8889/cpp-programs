#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp = a;
    a=b;
    b=temp;
}

int main(){
    int a,b;
     cout << "Enter two integers to swap: ";
    cin >> a>> b;
  cout << "Before swapping: a= " << a<<", b= " << b<< "\n";
     cout << "After swapping: b= " << a<< ", b= " <<b<<"\n";

    swap(a,b);
}
