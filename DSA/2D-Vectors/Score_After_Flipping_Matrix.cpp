#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n,x;
    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;
    vector< vector<int> > v(m, vector<int> (n));

    cout<<"Enter elements in matrix: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }

    for(int i=0; i<m; i++){
        if(v[i][0]==0){
            for(int j=0; j<n; j++){
                if(v[i][j]==0){
                    v[i][j]=1;
                }
                else{
                    v[i][j]=0;
                }
            }
        }
    }

    int num1=0,num0=0;
    for(int j=1; j<n; j++){
        for(int i=0; i<m; i++){
        num1=0, num0=0;
        if(v[i][j]==0) num0++;
        else num1++;
        }

        if(num0>num1){
            for(int i=0; i<m; i++){
                if(v[i][j]==0) v[i][j]=1;
                else v[i][j]=0;
            }
        }
    }

    int score=0;
    for(int i=m-1; i>=0; i--){
        int sum=0, z=1;
        for(int j=n-1; j>=0; j--){
           sum+= v[i][j]*z;
           z*=2; 
        }
        score +=sum;
    }
    cout<<score;
}
