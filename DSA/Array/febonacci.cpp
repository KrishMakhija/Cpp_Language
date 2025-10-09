//To print febonacci series
#include<iostream>
using namespace std;

void fabo(int n){
    int n1=0, n2=1;
    cout<<n1<<" "<<n2;
    
    for(int i=0; i<n-2; i++){
        int n3=n2+n1;
        cout<<" "<<n3;
        n1=n2;
        n2=n3;
    }
}

int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    fabo(n);
    return 0;
}
