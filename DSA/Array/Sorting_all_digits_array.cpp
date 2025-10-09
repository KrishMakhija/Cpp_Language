#include<iostream>
#include<vector>
using namespace std;

void Display(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    int size,x;
    vector<int> v;

    cout<<"enter the size of array: ";
    cin>>size;

    cout<<"Enter elements in tha array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>x;
        v.push_back(x);
    }

    cout<<"Array before sorting: "<<endl;
    Display(v);

    // int i=0,j=size-1;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(v[i]<v[j]){
                int temp=v[i];
                v[i]=v[j];
                v[j]=temp;

            }
        }
    }

    cout<<endl<<"Array after sorting: "<<endl;
    Display(v);

}
