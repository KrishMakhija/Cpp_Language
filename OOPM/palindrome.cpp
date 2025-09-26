//Check if the given number is palindrome
#include<iostream>
using namespace std;

void pali(int x){
    int num = x;
    int rev=0, rem;
    while(x!=0){
        rem=x%10;
        x/=10;
        rev=rev*10+rem;
    }
    if(num==rev)
    cout<<"Number is palindrome";
    else
    cout<<"Number is not a palindrome";
}

int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    pali(x);
    return 0;
}
