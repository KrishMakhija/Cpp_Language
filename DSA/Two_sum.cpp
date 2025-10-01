#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> v;
    int size,a;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter elements in array: ";
    for(int i=0; i<size; i++){
        cin>>a;
        v.push_back(a);
    }
    
    int x;
    cout<<"Enter number: ";
    cin>>x;
    for(int i=0; i<size-1; i++){
        for(int j=1; j<size; j++){
            if(v[i]+v[j]==x){
                cout<<"doublets found at ("<<i<<","<<j<<") indexes";
            }
        }
    }
}
