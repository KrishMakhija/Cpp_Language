#include<iostream>
#include<string>
using namespace std;

int maze(int hr, int hc){
    if(1>hr || 1>hc) return 0;
    if(1==hr && 1==hc) return 1;
    return maze(hr-1, hc)+maze(hr, hc-1);
}

void print(int hr, int hc, string s){
    if(1>hr || 1>hc) return;
    if(1==hr && 1==hc){
        cout<<s<<endl;
        return;
    }
    print(hr-1, hc, s+'D');
    print(hr, hc-1, s+'R');
}

int main(){
    int hr,hc;
    cout<<"Enter the end position of person: ";
    cin>>hr>>hc;

    cout<<maze(hr,hc)<<" are the possible number of ways to cross the maze, which are as follows:-"<<endl;
    print(hr, hc, "");
}
