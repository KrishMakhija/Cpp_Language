#include<iostream>
using namespace std;
#include<vector>

int main(){
    int size,x,rot,b,c;
    vector <int> v;
    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Enter elements in array: ";
    for(int i=0; i<size; i++){
        cin>>x;
        v.push_back(x);
    }

    cout<<"Enter the no. of rotations: ";
    cin>>rot;

    cout<<"Following is the array Before rotation: "<<endl;
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }

    for(int i=size-rot, j=size-1; i<=j; i++, j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    
    for(int i=0, j=size-1-rot; i<=j; i++, j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }

    for(int i=0, j=size-1; i<=j; i++, j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }

    cout<<"Following is the array after rotation: "<<endl;
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
}
