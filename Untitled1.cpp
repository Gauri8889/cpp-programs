#include<iostream>
using namespace std;
int main()
{
    int main(){
    int month,year,days;
    cout<<"Enter month(1-12):";
    cin>>month;
    cout<<"Enter year:";
    cin>>year;
    if(month==1){
        days=31;
    }
    else if(month==2){
        if(year%4==0&&year%100!=0)||(year%400==0)){
            days=29;
        }
        else{
            days=28;
        }
        elseif(month==3){
            days=31;
        }
        else if(month==4){
            days=30;
        }
        else if(month==5){
            days=31;
        }
        else if(month==6){
            days=30;
        }
        else if(month==7){
            days=31;
        }
        else if(month==8){
            days=31;
        }
        else if(month==9){
            days=30;
        }
        else if(month==10){
            days=31;
        }
        else if(month==11){
            days=30;
        }
        else if(month==12){
            days=31;
        }
        else{
            cout<<"invalid month! please enter a month between 1 and 12.\n";
        }
    }
}
}
