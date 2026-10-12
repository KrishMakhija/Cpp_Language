#include<iostream>
#include<vector>
using namespace std;

vector<int> Counting(string str){
  int vowels=0, cons=0, spaces=0, digits=0, spec=0;
  for(int i = 0; i<str.size(); i++){
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
      vowels++;
    else if(str[i]==' ')
      spaces++;
    else if(str[i]>='0' && str[i]<='9')
      digits++;
    else if(str[i]>='a' && str[i]<='z')
      cons++;
    else if(str[i]>='A' && str[i]<='Z')
      cons++;
    else
      spec++;
  }
  vector<int> v(5);
  v[0] = vowels;
  v[1] = cons;
  v[2] = digits;
  v[3] = spaces;
  v[4] = spec;
  return v;
}

int main(){
  string str;
  cout<<"Enter an string: ";
  getline(cin, str);
  
  if(str.empty()){
    cout<<"String is empty.";
  }
  else{
    vector<int> result = Counting(str);
    cout<<"Total number of vowels are: "<<result[0]<<endl;
    cout<<"Total number of consonents are: "<<result[1]<<endl;
    cout<<"Total number of digits are: "<<result[2]<<endl;
    cout<<"Total number of spaces are: "<<result[3]<<endl;
    cout<<"Total number of special characters are: "<<result[4]<<endl;
  }
}