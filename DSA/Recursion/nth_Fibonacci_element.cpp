#include<iostream>
using namespace std;

int fibo(int n){
    if(n==1 || n==2) return 1;
    int fib=fibo(n-1)+fibo(n-2);
    return fib;
}

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    if(n==0){
        cout<<n<<"th fibonacci number is "<<n;
    }
    else if(n==1 || n==2) cout<<n<<"th fibonacci number is 1";
    else{
        int x=fibo(n);
        cout<<n<<"th fibonacci number is "<<x;
    }
}
