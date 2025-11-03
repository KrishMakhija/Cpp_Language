#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int> v, int trips, long long mid){
    long long m=mid;
    int count=0;
    int n=v.size();

    for(int i=0; i<n; i++){
        count += m/v[i];
    }

    if(count>=trips) return true;
    else return false;
}

int main(){
    int n;
    cout<<"Enter the nummber of buses: ";
    cin>>n;

    vector<int> v(n);
    cout<<"Enter the speed of buses:-"<<endl;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int trips;
    cout<<"Enter the total number of trips: ";
    cin>>trips;

    int max=0;
    for(int i=0; i<n; i++){
        if(max<=v[i]){
            max=v[i];
        }
    }
    long long low=1;
    long long high=(long long)max*(long long)trips;
    long long mid;
    long long ans=0;
    while(low<=high){
        mid=(low+high)/2;
        if(check(v, trips, mid)==true){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }

    cout<<"Minimum time taken by all the buses to cmplete "<<trips<<" trips all together is "<<ans<<" hour";
}