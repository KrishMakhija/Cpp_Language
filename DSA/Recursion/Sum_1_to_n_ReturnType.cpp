#include<iostream>
using namespace std;

int add(int n){
    if(n==0) return n;
    n+=add(n-1);
    return n;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int x=add(n);
    cout<<"Sum of 1 to "<<n<<" is "<<x;
}
