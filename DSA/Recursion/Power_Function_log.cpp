#include<iostream>
using namespace std;

int pow(int x, int n){
    if(x==1 || n==1) return x;
    int ans;
    if(n%2==0){
        ans=pow(x,n/2);
        return ans*ans;
    }
    else{
        ans=pow(x,n/2);
        return (ans*ans)*x;
    }
}

int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    int n;
    cout<<"Enter the power: ";
    cin>>n;

    int a=pow(x,n);
    cout<<x<<" to  the power "<<n<<" is "<<a;
}
