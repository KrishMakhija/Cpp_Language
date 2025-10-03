#include<iostream>
#include<vector>
using namespace std;

void Display(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

// void M1(vector<int> &v){
//     for(int i=0; i<v.size(); i++){
//         for(int j=0; j<v.size(); j++){
//             if(v[i]<v[j]){
//                 int temp=v[i];
//                 v[i]=v[j];
//                 v[j]=temp;
//             }
//         }
//     }
// }

// void M2(vector<int> &v){
//     int c1=0, c0=0, c2=0;
//     for(int i=0; i<v.size(); i++){
//         if(v[i]==0) c0++;
//         else if(v[i]==1) c1++;
//         else if(v[i]==2) c2++;
//     }

//     cout<<"Array after sorting: "<<endl;
//     for(int i=0; i<v.size(); i++){
//         if(i<c0) v[i]=0;
//         else if(i<(c0+c1)) v[i]=1;
//         else v[i]=2;
//     }
// }

void M3(vector<int> &v){
    int lo=0, mid=0, hi=v.size()-1;
    while(mid<=hi){
        if(v[mid]==2){
            swap(v[hi],v[mid]);
            hi--;
        }
        if(v[mid]==0){
            swap(v[lo],v[mid]);
            mid++;
            lo++;
        }
        if(v[mid]==1) mid++;
    }

}

int main(){
    vector<int> v;
    int size, x;
    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Enter elements in the array: ";
    for(int i=0; i<size; i++){
        cin>>x;
        v.push_back(x);
    }

    cout<<"Array before Sorting: "<<endl;
    Display(v);

    // M1(v);
    // cout<<"Array after sorting: "<<endl;
    // Display(v);

    // M2(v);
    // Display(v);

    M3(v);
    cout<<"Array after sorting: "<<endl;
    Display(v);

}
