#include <iostream>
using namespace std;
#include<vector>

void last_occ(vector<int> v){
    int x;
    cout<<"Enter a value to search: ";
    cin>>x;
    int i;
    for(i=v.size()-1; i>=0; i--)
    {
        if(v.at(i)==x){
            cout<<"Element found at "<< i <<" position";
            break;
        }
        
    }
}

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(9);
    v.push_back(50);
    v.push_back(47);
    v.push_back(20);
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(5);

    last_occ(v);
}
