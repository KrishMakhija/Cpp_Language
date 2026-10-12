#include<iostream>
using namespace std;

int main(){
  string str;
  cout<<"Enter an string: ";
  getline(cin, str);
  if(str.empty())
    cout<<"String is empty.";
  else
    for(int i=0; i<str.size(); i++){
    cout<<"Ascii value of "<<str[i]<<" is: "<<(int)str[i]<<endl;
    }
}