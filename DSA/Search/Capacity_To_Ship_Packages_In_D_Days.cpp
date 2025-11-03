#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int> v, int mid, int D){
    int m=mid;
    int n=v.size();
    int count=1;
    for(int i=0; i<n; i++){
        if(v[i]<=m){
            m-=v[i];
        }
        else{
            count++;
            m=mid;
            m-=v[i];
        }
    }

    if(count<=D) return true;
    else return false;
}

int main(){
    int n;
    cout<<"Enter the Size of shipment container: ";
    cin>>n;

    vector<int> v(n);
    cout<<"Enter Shipment values:-"<<endl;
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }

    int D;
    cout<<"Enter the number of days: ";
    cin>>D;

    int max=0;
    int sum=0;
    for(int i=0; i<n; i++){
        if(max<v[i]){
            max=v[i];
        }
        sum+=v[i];
    }

    int mid, low=max;
    int high=sum;
    int ans;
    while(low<=high){
        mid=(low+high)/2;
        if(check(v, mid, D)==true){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }

    cout<<"Minimum Capacity to Ship Packages in "<<D<<" Days is "<<ans;
}