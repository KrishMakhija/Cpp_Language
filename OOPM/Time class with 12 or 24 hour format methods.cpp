#include<iostream>
using namespace std;

class Time{
    public:
    int hours, minutes, seconds;
    int i;
    Time(){
        hours = 0;
        minutes = 0;
        seconds = 0;
        i=-1;
    }
    Time(int h, int m, int s, int a){
        hours = h;
        minutes = m;
        seconds = s;
        i = a;
    }
    
    void setto24(){
        if(i==1){
            cout<<endl<<"Current time in 24 hour format is:-"<<endl;
            cout<<hours<<" : "<<minutes<<" : "<<seconds<<endl;
        }
        else if(i==2){
            cout<<endl<<"Current time in 24 hour format is:-"<<endl;
            cout<<hours+12<<" : "<<minutes<<" : "<<seconds<<endl;
        }
        else{
            cout<<endl<<"Current time in 24 hour format is:-"<<endl;
            cout<<hours<<" : "<<minutes<<" : "<<seconds<<endl;
        }
    }
    
    void setto12(){
        if(hours>12){
            i=2;
            hours=hours-12;
            cout<<endl<<"Current time in 12 hour format is:-"<<endl;
            cout<<hours<<" : "<<minutes<<" : "<<seconds<<" pm"<<endl;
        }
        else if(hours<12){
            cout<<endl<<"Current time in 12 hour format is:-"<<endl;
            cout<<hours<<" : "<<minutes<<" : "<<seconds<<" am"<<endl;
        }
        else{
            cout<<endl<<"Current time in 12 hour format is:-"<<endl;
            cout<<hours<<" : "<<minutes<<" : "<<seconds<<" pm"<<endl;
        }
    }
};

int main(){
    int h, m, s, a;
    cout<<"Ënter hours: ";
    cin>>h;
    cout<<"Ënter minutes: ";
    cin>>m;
    cout<<"Ënter seconds: ";
    cin>>s;
    cout<<"Ënter\n1. for am \n2. for pm \n-1. for 24 hour format"<<endl<<"Enter your choice: ";
    cin>>a;
    
    Time t1;
    Time t2(h, m, s, a);
    t2.setto12();
    t2.setto24();
    
}
