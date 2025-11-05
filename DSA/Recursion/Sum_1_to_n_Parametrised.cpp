#include<iostream>
using namespace std;

int add(int sum, int n){
    if(n==0){
        return sum;
    }
    add(sum+n, n-1);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int x=add(0, n);
    cout<<"Sum of 1 to "<<n<<" is "<<x;
}
