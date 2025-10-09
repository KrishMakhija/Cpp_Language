#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of rows in matrix: ";
    cin>>m;
    cout<<"Enter the number of columns in matrix: ";
    cin>>n;

    int mat1[m][n];
    cout<<"Enter the elements in Matrix: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat1[i][j];
        }
    }

    int mat2[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            mat2[i][j]=mat1[j][i];
        }
    }

    cout<<"Matrix Before Transpose is as Follows:"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrix After Transpose is as Follows:"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
}