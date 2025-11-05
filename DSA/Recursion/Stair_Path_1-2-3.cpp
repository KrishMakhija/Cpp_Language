#include<iostream>
using namespace std;

int stair(int n){
    if(n<=1) return 1;
    if(n==2) return 2;
    int ans = stair(n-1)+stair(n-2)+stair(n-3);
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number of stairs: ";
    cin>>n;

    if(n<=0){
        cout<<"Enter the correct number of stairs";
    }
    else cout<<"The number of ways for climbing "<<n<<" stairs are "<<stair(n);
}
