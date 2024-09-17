#include<iostream>
using namespace std;
# define n 20
class shopping
{
    int itemcode[n];
    int price[n];
    int cnt;
    public:shopping()
    {
        cnt=0;
    }
    public:void getorder();
    void display();
  void cencel();
};
  void shopping::getorder()
{
    cout<<"\Enter itemcode\n";
    cin>>itemcode[cnt];
    cout<<"Enter price\n";
    cin>>price[cnt];
    cnt++;
}
void shopping::display()
{
    for(int i=0; i<cnt;i++)
    {
        cout<<"itemcode="<<itemcode[i]<<"\t";
        cout<<"price="<<price[i]<<"\n";
    }
}
    void shopping::cancel()
    {
        int code;
        cout<<"\n enter itemcode\n";
        cin>>code;
        for(int i=0;i<cnt;i++)
        {
            if(itemcode[i]==code)
            {
                price[i]=0;
            }
        }
    }

</div>
int main()
{
    shopping s;
    int c;
    char ch;
    do{
        cout<<"enter 1 to add cart\n Enter 2 to display list\n enter 3 to get cancel\n";
        cin>>c;
        switch(c)
        {
            case 1;
            {
                s.getoder();
                break;
            }
            case 2;
            {
                s.display();
                break;
            }
            case 3;
            {
                s.cancel();
                break;
            }
            default;
            {
                cout<<"Invalid choice\n";
            }
        }
        cout<<"Do u wanna Continue,select y\n";
        cin>>ch;
    }while(ch=='y');
}
