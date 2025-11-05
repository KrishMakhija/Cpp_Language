#include<iostream>
using namespace std;

int power(int a, int b){
    if(b==0) return 1;
    a*=power(a,b-1);
    return a;
}

int main(){
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;

    cout<<"Enter number of power you wanna give: ";
    cin>>b;

    int c=power(a, b);
    cout<<a<<" raised to the power "<<b<<" is "<<c;
}
