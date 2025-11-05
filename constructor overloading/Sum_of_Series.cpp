#include<iostream>
using namespace std;

class series{
    long long sum;

    public:
    series(){
        int term=9;
        sum=0;

        for(int i=1;i<=5;i++){
            sum=sum+term;
            term=term*10+9;
        } 
    }

    series(int n){
        sum=0;
        int term=9;

        for(int i=1;i<=n;i++){
            sum=sum+term;
            term=term*10+9;
        }
    }

    void display(){
        cout << "sum is: " << sum << endl;
    }
};

int main(){
    series s1;
    series s2(7);

    s1.display();
    s2.display();
    return 0;
}
