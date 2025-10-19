#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;
    vector< vector<int> > v(m,vector<int>(n));

    cout<<"Enter elements in matrix such that the rows and columns are in ascending order from (Left to Right) & (Top to Down) respectively:-"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }

    int target;
    cout<<"Enter target: ";
    cin>>target;

    int row=-1,col=-1;
    int i=0, j=n-1;
    while(j>=0 && i<m){
        if(v[i][j]==target){
            row=i+1, col=j+1;
            break;
        }
        else if(v[i][j]>target) j--;

        else i++;
    }

    if(row==-1 && col==-1) cout<<"Element Not Found";
    else cout<<"Element Found at "<<row<<" Row and "<<col<<" Column";

}
