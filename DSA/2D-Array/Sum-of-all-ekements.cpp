#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of Rows: ";
    cin>>m;
    cout<<"Enter the umber of Columns: ";
    cin>>n;

    int arr[m][n];
    cout<<"Enter the elements in array:"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int sum=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            sum=sum+arr[i][j];
        }
    }

    cout<<"Sum of all elements in array is: "<<sum;
}
