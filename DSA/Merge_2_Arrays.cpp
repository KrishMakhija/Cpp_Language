#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2;

    int size1, x, size2, y;

    cout << "Enter the size of first array: ";
    cin >> size1;
    cout << "Enter elements in first array (sorted): " << endl;
    for(int i=0; i<size1; i++){
        cin >> x;
        v1.push_back(x);
    }

    cout << "Enter the size of second array: ";
    cin >> size2;
    cout << "Enter elements in second array (sorted): " << endl;
    for(int i=0; i<size2; i++){
        cin >> y;
        v2.push_back(y);
    }

    vector<int> v3;
    int i=0, j=0;

    while(i < size1 && j < size2){
        if(v1[i] < v2[j]){
            v3.push_back(v1[i]);
            i++;
        }
        else{
            v3.push_back(v2[j]);
            j++;
        }
    }

    while(i < size1){
        v3.push_back(v1[i]);
        i++;
    }

    while(j < size2){
        v3.push_back(v2[j]);
        j++;
    }

    cout << "Merged array is: ";
    for(int f=0; f<v3.size(); f++){
        cout << v3[f] << " ";
    }
    cout << endl;

    return 0;
}
