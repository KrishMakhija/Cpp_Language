#include<iostream>
using namespace std;

void print2(int n){
    if(n<=0) return;
    print2(n-1);
    cout<<n<<" ";
}

void print1(int n, int i){
    //Function call after work
    if(i>n) return;
    cout<<i<<" ";
    print1(n,i+1);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    print1(n, 1);
    cout<<endl;
    print2(n);
}
