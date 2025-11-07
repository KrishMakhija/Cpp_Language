#include<iostream>
using namespace std;

int main(){
    int even=0, odd=0;
    for(int i=1; i<=20; i++){
        if(i%2==0){
            even+=i;
        }
        else odd+=i;
    }
    
    cout<<"Sum of first 10 Natural even numbers is: "<<even<<endl;
    cout<<"Sum of first 10 Natural odd numbers is: "<<odd<<endl;
}
