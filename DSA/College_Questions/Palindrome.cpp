#include<iostream>
using namespace std;

int palindrome(string str){
  int j = str.size()-1;
  int i = 0;
  while(i<=j){
    if(str[i]==str[j]){
      i++;
      j--;

    }
    else return -1;
  }
  return 1;
}


int main(){
  string str;
  cout<<"Enter an string: ";
  getline(cin, str);
  if(str.empty())
    cout<<"String is empty.";
  else{
    int result = palindrome(str);
    if(result == 1)
      cout<<"Given String is Palindrome.";
    else
      cout<<"Given String is not Palindrome.";  
  }
}