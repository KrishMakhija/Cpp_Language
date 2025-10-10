#include<iostream>
using namespace std;

int main(){
    int m1,n1,m2,n2;
    cout<<"Enter the number of rows in first matrix: ";
    cin>>m1;
    cout<<"Enter the number of columns in first matrix: ";
    cin>>n1;

    cout<<"Enter the number of rowss in second matrix: ";
    cin>>m2;
    cout<<"Enter the number of columns in second matrix: ";
    cin>>n2;

    if(n1==m2){
        int mat1[m1][n1];
        cout<<"Enter the elements in first matrix:-"<<endl;
        for(int i=0; i<m1; i++){
            for(int j=0; j<n1; j++){
                cin>>mat1[i][j];
            }
        }

        int mat2[m2][n2];
        cout<<"Enter the elements in second array:-"<<endl;
        for(int i=0; i<m2; i++){
            for(int j=0; j<n2; j++){
                cin>>mat2[i][j];
            }
        }

        int mat3[m1][n2];
        for(int i=0; i<m1; i++){
            for(int j=0; j<n2; j++){
                mat3[i][j]=0;
                for(int k=0; k<m2; k++){
                    mat3[i][j] += mat1[i][k]*mat2[k][j];
                }
            }
        }
        
        cout<<"Multiplication of both the matrices is:-"<<endl;
        for(int i=0; i<m1; i++){
            for(int j=0; j<n2; j++){
                cout<<mat3[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"matrix multiplication is not possible";
    }

    
}
