#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string:"<<endl;
    getline(cin,s);
    int count=0;

    if(s.length()<=1){
        cout<<"String is not valid.";
    }
    else{
        for(int i=0; i<s.length(); i++){
            if(i==0){
                if(s[i]!=s[i+1]) count++;
            }
            else if(i==s.length()-1){
                if(s[i]!=s[i-1]) count++;
            }
            else{
                if(s[i]!=s[i-1] && s[i]!=s[i+1]){
                count++;
                }
            }
        }

        cout<<count<<" Elements are different";
    }
}
