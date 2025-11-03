#include<iostream>
using namespace std;
#include<vector>

bool check(vector<int> v, int h, int mid){
    int m=mid;
    long long count=0;
    for(int i=0; i<v.size(); i++){
        if(m>=v[i]){ 
            count++;
        }
        else if(v[i]%m==0){
            count+=(long long)(v[i]/m);
        }
        else{
            count+=(long long)((v[i]/m)+1);
        }
    }

    if(count<=h) return true;
    else return false;
}

int main(){
    int n;
    cout<<"Enter the total no. of piles: ";
    cin>>n;

    vector<int> v(n);
    cout<<"Enter the number of bananas in each pile:-"<<endl;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int h;
    cout<<"Enter the no. of hours: ";
    cin>>h;

    int max=0;
    int sum=0;
    for(int i=0; i<n; i++){
        if(v[i]>=max){
            max=v[i];
        }
        sum+=v[i];
    }

    cout<<endl<<sum<<" "<<max<<endl;
    int low=1;
    int high=max;
    int mid, ans;
    while(low<=high){
        mid=(low+high)/2;
        if(check(v, h, mid)==true){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }

    cout<<"Koko is required to eat "<<ans<<" bananas per hour to finish all bananas in "<<h<<" hours.";
}