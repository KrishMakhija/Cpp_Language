#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter the marks obtained bye the student: ";
    cin>>marks;
    
    switch(marks/10){
        case 10: 
            cout<<"Grade is A+ "; 
            break;
        
        case 9: 
            cout<<"Grade is A";
            break;
        
        case 8:
            cout<<"Grade is B+";
            break;
            
        case 7:
            cout<<"Grade is C+";
            break;
            
        case 6:
            cout<<"Grade is C";
            break;
            
        case 5:
            cout<<"Grade is D+";
            break;
            
        case 4:
            cout<<"Grade is D";
            break;
            
        case 3:
            cout<<"Grade is D#";
            break;
            
        default: 
            cout<<"Grade is F";
            break;
    }
    return 0;
}
