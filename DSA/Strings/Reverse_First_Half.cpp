#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string:"<<endl;
    getline(cin,s);

    if(s.length()%2!=0){
        cout<<"Given string is not valid";
    }
    else{
        int n= s.length();
        reverse(s.begin(),s.begin()+n/2);
        cout<<"String after it's first half is reversed:-"<<endl;
        cout<<s;
    }
}
