#include<iostream>
using namespace std;

class number{
    int x;

public:
    number(){
        x=0;
    }

    number(int a){
        x=a;
    }

    //prefix increment
    void operator++(){
        ++x;
    }

    //postfix increment
    void operator++(int){
        x++;
    }

    //addition
    number operator+(number obj){
        number temp;
        temp.x=x+obj.x;
        return temp;
    }

    // < comparison
    bool operator<(number obj){
        return x < obj.x;
    }

    //equal or not
    bool operator==(number obj){
        return x==obj.x;
    }

    void display(){
        cout << "value is: " << x << endl;
    }
};

int main(){
    int val1,val2;

    cout << "enter first number: " ;
    cin >> val1;
    cout << "enter second number:  ";
    cin >> val2;

    number n1,n2,n3;
    n1=number(val1);
    n2=number(val2);

    int ch;

    do{
        cout << "---MENU---"<< endl;
        cout << "1. prefix increment" << endl;
        cout << "2. postfix increment" << endl;
        cout << "3. addition" << endl;
        cout << "4. < comparison" << endl;
        cout << "5. == equal or not" << endl;
        cout << "6.EXIT" << endl;
        cout << "enter your choice: " ;
        cin >> ch;

        switch(ch){
            case 1:
            ++n1;
            cout << "after prefix increment: " ;
            n1.display();
            break;

            case 2:
            n1++;
            cout << "after postfix increment: " ;
            n1.display();
            break;

            case 3:
            n3=n1+n2;
            cout << "sum is: " ;
            n3.display();
            break;

            case 4:
            if(n1<n2){
                cout << "n1 is smaller than n2" << endl;
            }
            else{
                cout << "n1 is not smaller than n2" << endl;
            }
            break;

            case 5:
            if(n1==n2){
                cout << "n1 and n2 are equal" << endl;
            }
            else{
                cout << "n1 and n2 are not equal" << endl;
            }
            break;

            case 6:
            cout << "exiting program..." << endl;
            break;

            default:
            cout << "invalid " << endl;
            break;
        }
    }while(ch!=6);
    return 0;
}
