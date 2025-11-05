#include<iostream>
#include<string>
using namespace std;

int maze(int lr, int lc, int hr, int hc){
    if(lr>hr || lc>hc) return 0;
    if(lr==hr && lc==hc) return 1;
    return maze(lr+1, lc, hr, hc)+maze(lr, lc+1, hr, hc);
}

void print(int lr, int lc, int hr, int hc, string s){
    if(lr>hr || lc>hc) return;
    if(lr==hr && lc==hc){
        cout<<s<<endl;
        return;
    }
    print(lr+1, lc, hr, hc, s+'D');
    print(lr, lc+1, hr, hc, s+'R');
}

int main(){
    int lr,hr,lc,hc;
    cout<<"Enter the start position of person \nFirst rows and then column: ";
    cin>>lr>>lc;
    cout<<"Enter the end position of person: ";
    cin>>hr>>hc;

    cout<<maze(lr,lc,hr,hc)<<" are the possible number of ways to cross the maze, which are as follows:-"<<endl;
    print(lr, lc, hr, hc, "");
}
