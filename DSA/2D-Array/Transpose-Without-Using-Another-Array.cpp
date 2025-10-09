#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of rows and columns: ";
    cin>>m;

    cout<<"Enter the Elements in Matrix:"<<endl;
    int mat[m][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }

    cout<<"Matrix Before Transpose is as Follows: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<m; i++){
        for(int j=i+1; j<m;j++){
            int temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }

    cout<<"Matrix After Transpose is as Follows: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}