#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of Rows of both Matrix: ";
    cin>>m;
    cout<<"Enter the number of Columns of both Matrix: ";
    cin>>n;

    int mat1[m][n];
    cout<<"Enter the elements in 1st Matrix:"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat1[i][j];
        }
    }

    int mat2[m][n];
    cout<<"Enter the elements in 2nd Matrix:"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat2[i][j];
        }
    }

    int mat3[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }

    cout<<"Addition of Two Matrices is as follows: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }

}
