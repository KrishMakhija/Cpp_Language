#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of rows in matrix: ";
    cin>>m;
    cout<<"Enter the number of columns in matrix: ";
    cin>>n;

    int mat[m][n];
    cout<<"Enter the elements in the matrix:-"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }

    int minr=0, maxr=m-1, minc=0, maxc=n-1;
    
    cout<<"Matrix in Spiral Form by Both Methods is as follows:-"<<endl;
    
    while(minr<=maxr && minc<=maxc){
        for(int j=minc; j<=maxc; j++){
        cout<<mat[minr][j]<<" ";
        }
        minr++;

        if(minc>maxc || minr>maxr) break;
        for(int i=minr; i<=maxr; i++){
            cout<<mat[i][maxc]<<" ";
        }
        maxc--;

        if(minc>maxc || minr>maxr) break;
        for(int j=maxc; j>=minc; j--){
            cout<<mat[maxr][j]<<" ";
        }
        maxr--;
        
        if(minc>maxc || minr>maxr) break;
        for(int i=maxr; i>=minr; i--){
            cout<<mat[i][minc]<<" ";
        }
        minc++;
    }

    cout<<endl;

    int count=0,t=m*n;
    minr=0, maxr=m-1, minc=0, maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        for(int j=minc; j<=maxc && count<t; j++){
        cout<<mat[minr][j]<<" ";
        count++;
        }
        minr++;

        for(int i=minr; i<=maxr && count<t; i++){
            cout<<mat[i][maxc]<<" ";
            count++;
        }
        maxc--;

        for(int j=maxc; j>=minc && count<t; j--){
            cout<<mat[maxr][j]<<" ";
            count++;
        }
        maxr--;
        
        for(int i=maxr; i>=minr && count<t; i--){
            cout<<mat[i][minc]<<" ";
            count++;
        }
        minc++;
    }
    
}
