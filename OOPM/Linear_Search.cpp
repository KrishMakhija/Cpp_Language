#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    int a, f=0;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            f=1;
            a=i;
            break;
        }
    }
    
    if(f==0) cout<<"Target not found"<<endl;
    else cout<<"Target Found at "<<a<<" index"<<endl;
}
