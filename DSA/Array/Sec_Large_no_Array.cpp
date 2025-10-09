//Write a function to find the second largest element in an array (no sorting, only pointer traversal).
#include<iostream>
using namespace std;
#define Size 10

void Slarge(int *p){
    int lar=INT16_MIN;
    int slar=INT16_MIN;
    
    for(int i=0; i<Size; i++){
        if(lar<p[i])
        lar=p[i];
    }

    for(int i=0; i<Size; i++){
        if(slar<p[i] && p[i]!=lar)
        slar=p[i];
    }

    cout<<"Largest number is: "<<lar<<endl;
    cout<<"Second largest number is: "<<slar<<endl;
}

int main(){
    int arr[Size];
    cout<<"Enter elements in array: ";
    for(int i=0; i<Size; i++){
        cin>>arr[i];
    }
    Slarge(&arr[0]);
    return 0;
}
