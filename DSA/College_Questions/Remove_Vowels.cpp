#include<iostream>
using namespace std;

string remove(string str){
  int j=0;
  for(int i=0; i<str.size(); i++){
    if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){
      str[j]=str[i];
      j++;
    }
  }
  str.resize(j);
  return str;
}

int main(){
  string str;
  cout<<"Enter an string: ";
  getline(cin, str);
  if(str.empty())
    cout<<"String is empty.";
  else{
    string result = remove(str);
    cout<<"Final string is: "<<result;
  }
}