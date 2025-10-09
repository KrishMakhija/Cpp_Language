#include <iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter number of students: ";
    cin>>m;
    int arr[m][2];
    for(int i=0; i<m; i++){
        for(int j=0; j<2; j++){
            cout<<"Enter the Roll no. of "<<i+1<<" student: ";
            cin>>arr[i][j];
            j++;
            cout<<"Enter the marks of "<<i+1<<" student: ";
            cin>>arr[i][j]; 
        }
    }

    cout<<"Details of the students are as follows: "<<endl;

    for(int i=0; i<m; i++){
        for(int j=0; j<2; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
