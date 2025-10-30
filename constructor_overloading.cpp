#include<iostream>
#include<string>
using namespace std;

class complex{
    float real,imag;

    public:
    complex(){
        real=0;
        imag=0;
    }

    complex(float r,float i){
        real=r;
        imag=i;
    }

    friend complex add(complex c1, complex c2);

    void display(){
        cout << real << "+" << imag << "i" << endl;
    }
};

complex add(complex c1, complex c2){
    complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}

int main(){
    float r1, i1, r2, i2;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;

    complex c1(r1, i1);  
    complex c2(r2, i2);  
    complex c3;         

    c3 = add(c1, c2);   

    cout << "Sum = ";
    c3.display();

    return 0;
}

