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
            cout<<endl;
            cout<<real<<" + "<<img<<"i"<<endl;
            cout<<endl;
        }
        
        Complex addcomplex(Complex c1, Complex c2);
        Complex subcomplex(Complex c1, Complex c2);
        Complex multicomplex(Complex c1, Complex c2);
        Complex divcomplex(Complex c1, Complex c2);
};

Complex Complex::addcomplex(Complex c1, Complex c2){
    Complex c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    return c3;
}

Complex Complex::subcomplex(Complex c1, Complex c2){
    Complex c3;
    c3.real=c1.real-c2.real;
    c3.img=c1.img-c2.img;
    return c3;
}

Complex Complex::multicomplex(Complex c1, Complex c2){
    Complex c3;
    c3.real=(c1.real*c2.real)+((c1.img*c2.img)*(-1));
    c3.img=(c1.real*c2.img)+(c1.img*c2.real);
    return c3;
}

Complex Complex::divcomplex(Complex c1, Complex c2){
    Complex c3;
    c3.real=(c1.real*c2.real)+(c1.img*c2.img)/((c2.real*c2.real)+(c2.img*c2.img));
    c3.img=((c1.img*c2.real)-(c1.real*c2.img))/((c2.real*c2.real)+(c2.img*c2.img));
    return c3;
}

int main(){
    Complex c1(3,4);
    Complex c2(2,3);
    
    Complex c3;
    Complex add = c3.addcomplex(c1,c2);
    cout<<"Addition of Complex numbers is:-";
    add.display();
    
    Complex sub = c3.subcomplex(c1,c2);
    cout<<"Substraction of Complex numbers is:-";
    sub.display();
    
    Complex multi = c3.multicomplex(c1,c2);
    cout<<"Multiplication of Complex numbers is:-";
    multi.display();
    
    Complex division = c3.divcomplex(c1,c2);
    cout<<"Division of Complex numbers is:-";
    division.display();
    
    return 0;
}
