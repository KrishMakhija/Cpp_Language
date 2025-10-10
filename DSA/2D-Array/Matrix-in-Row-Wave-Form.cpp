#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of rows in matrix: ";
    cin>>m;
    cout<<"Enter the number of columns in matrix: ";
    cin>>n;

    int mat[m][n];
    cout<<"Enter the elements in matrix:-"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }

    cout<<"Matrix in Column Wave Form is as follows:-"<<endl;
    for(int j=0; j<n; j++){
        if(j%2!=0){
            for(int i=m-1; i>=0; i--){
                cout<<mat[i][j]<<" ";
            }
        }
        else{
            for(int i=0; i<m; i++){
                cout<<mat[i][j]<<" ";
            }
        }
    }
}
