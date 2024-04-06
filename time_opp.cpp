#include<iostream>
using namespace std;
class time{
    private:
    int hours;
    int min;
    int sec;
    public:
    time()
    {
        hours = 0; 
        min = 0;
        sec = 0;
    }
    time(int h,int m,int s)
    {
        hours = h;
        min = m;
        sec = s;
    }
    void show()
    {
        cout<<hours<<":"<<min<<":"<<sec<<endl;
    }
    void adjust()
    {
        if(sec/10 >5)
        {
            min = min + (sec/10 -5);
            sec = 0 + (sec%10);
        }
        if(min/10 >5)
        {
            hours = hours + (min/10 -5);
            min = 0 + (min%10);
        }
        if(hours > 12)
        {
            for (int i = hours; i > 12; i-=12)
            {
                hours = hours - 12;
            }
            

        }
    }
    void addTime(int h1,int m1,int s1 , int h2,int m2,int s2)
    {
        hours = h1 + h2;
        min = m1 + m2;
        sec = s1 + s2;
    }
};
void menu(time &t)
{
    int n,h1,m1,s1,h2,m2,s2;
    do{
    cout<<"----welcome to mohib menue----"<<endl
    <<"Press 0 for Exit"<<endl
    <<"Press 1 for Time display"<<endl
    <<"Press 2 for Adding time"<<endl;
    cin>>n;
    switch (n)
    {
        case 0 :
        return;
    case 1:
         t.adjust();
        t.show();
        break;
    case 2:
    cout<<"--Enter time 1--"<<endl;
    cout<<"Enter h1 :  ";
    cin>>h1;
    cout<<"Enter m1 :  ";
    cin>>m1;
    cout<<"Enter s1 :  ";
    cin>>s1;
    cout<<endl<<"--Enter time 2--"<<endl;
    cout<<"Enter h2 :  ";
    cin>>h2;
    cout<<"Enter m2 :  ";
    cin>>m2;
    cout<<"Enter s2 :  ";
    cin>>s2;
     t.addTime(h1,m1,s1,h2,m2,s2);
    default:
        break;
    }
    }
    while(true);
    
}
int main()
{int h,m,s;
    cout<<"Enter hours :  ";
    cin>>h;
    cout<<"Enter min :  ";
    cin>>m;
    cout<<"Enter sec :  ";
    cin>>s;
    time t(h,m,s);
    menu(t);
}