#include<iostream>
using namespace std;

void print(int n){
    if(n==0) return;
    cout<<"Good Morning"<<endl;
    print(n-1);
}

int main(){
    int n;
    cout<<"How many times you wanna print Good Morning?"<<endl;
    cin>>n;

    print(n);
}
