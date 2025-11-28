//Operations on complex numbers

#include <iostream>
#include<complex>
using namespace std;

class Complex{
    private:
        float real;
        float img;
        
    public:
        Complex(){
            real=0;
            img=0;
        }
        Complex(float a, float b){
            real=a;
            img=b;
        }
        
        void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
            cout<<"Above is the addition of Complex numbers";
        }
        
        Complex addcomplex(Complex c1, Complex c2);
};

Complex Complex::addcomplex(Complex c1, Complex c2){
    Complex c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    return c3;
}

int main(){
    Complex c1(3,4);
    Complex c2(2,3);
    
    Complex c3;
    Complex sum = c3.addcomplex(c1,c2);
    
    sum.display();
    return 0;
}
