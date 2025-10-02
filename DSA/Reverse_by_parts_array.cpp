#include<iostream>
using namespace std;
#include<vector>

int main(){
    int size,x,a,b;
    vector<int> v;
    cout<<"enter the size of array: ";
    cin>>size;

    cout<<"Enter the elements in array: ";
    for(int i=0; i<size; i++){
        cin>>x;
        v.push_back(x);
    }

    cout<<"Array before reversing: ";
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }

    cout<<endl<<"Enter the indexes from and to which you want to update: ";
    cin>>a>>b;
    for(int i=a,j=b; i<=j; i++, j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }

    cout<<"Array after reversing: ";
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }

}
