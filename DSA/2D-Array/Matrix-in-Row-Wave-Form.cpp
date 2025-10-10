#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of rows in matrix: ";
    cin>>m;
    cout<<"Enter the number of columns in matrix: ";
    cin>>n;

    int mat[m][n];
    cout<<"Enter elements in array:-"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }

    cout<<"Matrix in Row Wave Form is as follows:-"<<endl;
    for(int i=0; i<m; i++){
        if(i%2!=0){
            for(int j=n-1; j>=0; j--){
                cout<<mat[i][j]<<" ";
            }
        }
        else{
            for(int j=0; j<n; j++){
                cout<<mat[i][j]<<" ";
            }
        }
    }
}
