#include<iostream>
using namespace std;

string reverse(string str){
  int j=str.size()-1;
  for(int i=0; i<=j; i++){
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    j--;
  }
  return str;
}

int main(){
  string str;
  cout<<"Enter an string: ";
  getline(cin, str);
  if(str.empty())
    cout<<"String is empty.";
  else{
    str = reverse(str);
    cout<<"The reversed string is: "<<str<<endl;
  }
}
