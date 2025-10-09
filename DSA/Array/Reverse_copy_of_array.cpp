#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> v1;
    vector<int> v2;
    int size,n,x;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the elements in first array: ";
    for(int i=0; i<size; i++){
        cin>>n;
        v1.push_back(n);
    }

    for(int i=size-1; i>=0; i--){
        x=v1[i];
        v2.push_back(x);
    }
    
    for(int i=0; i<size; i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<size; i++){
        cout<<v2[i]<<" ";
    }
    
}
