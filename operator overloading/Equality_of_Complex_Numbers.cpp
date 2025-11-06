#include<iostream>
using namespace std;

class complex{
    float real,imag;

    public:
    complex(){
        real=0;
        imag=0;
    }

    complex(float r, float i){
        real=r;
        imag=i;
    }

    bool operator==(complex c){
        return(real==c.real && imag==c.imag);
    }

    void display(){
        cout << real << "+" << imag << "i" << endl;
    }


};

int main(){
    float r1,r2,i1,i2;

    cout << "enter real and imaginary part of first complex number: " ;
    cin >> r1 >> i1;
    cout << "enter real and imaginary part of second complex number: " ;
    cin >> r2 >> i2;

    complex c1(r1,i1);
    complex c2(r2,i2);

    if(c1==c2){
        cout << "complex numbers are equal" << endl;
    }
    else{
        cout << "complex numbers are not equal" << endl;
    }
    
    return 0;

}
