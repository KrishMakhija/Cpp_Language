#include<iostream>
using namespace std;
#include<vector>

int main(){
    int size,x;
    vector<int> v1;
    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Enter the Elements of array: ";
    for(int i=0; i<size; i++){
        cin>>x;
        v1.push_back(x);
    }
    
    for(int i=0, j=size-1; i<=j; i++, j--){
        int temp=v1[i];
        v1[i]=v1[j];
        v1[j]=temp;
    }
    cout<<"Elements in array in reverse order are as follows: "<<endl;
    for(int i=0; i<size; i++){
        cout<<v1[i]<<" ";
    }
}
