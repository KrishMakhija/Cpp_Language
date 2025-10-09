#include<iostream>
using namespace std;
#include<vector>

void Display(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int> v;
    int size,n;
    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Ener elements in array: ";
    for(int i=0; i<size; i++){
        cin>>n;
        v.push_back(n);
    }
    
    Display(v);
    cout<<endl;

    int i=0,j=v.size()-1;
    while(i<j){
        if(v[i]==0){
            i++;
        }
        if(v[j]==1){
            j--;
        }
        if(i>j) break;
        if(v[i]==1 && v[j]==0){
            swap(v[i],v[j]);
        }
    }

    Display(v);
}
