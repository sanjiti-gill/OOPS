#include<iostream>
using namespace std;

class interest{
    double result;
    double principle,rate;
    int time;

    public:
    interest(double p,double r, int t){
        principle=p;
        rate=r;
        time=t;
        result=(p*r*t)/100;
        cout << "result is: " << result << endl;
    }

    interest(double p,double r,int t,int n){
        principle=p;
        rate=r;
        time=t;
        result=p*(pow(1+(r/100),t))-p;
        cout << "result is: " << result << endl;
    }
};

int main(){
    double p,r;
    int t;
    int ch;
    cout << "enter principle, rate and time" ;
    cin >> p >> r >> t;
    cout << "1 for simple interest 2 for compound interest: " ;
    cin >> ch;
    int n;

    if(ch==1){
        interest i1(p,r,t);
    }
    if(ch==2){
        cout << "enter compounding frequency: " ;
        cin >> n;
        interest i2(p,r,t,n);
    }
    return 0;
}
