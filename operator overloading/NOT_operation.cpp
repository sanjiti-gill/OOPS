#include<iostream>
using namespace std;

class mybool{
    bool value;

    public:
    mybool(){
        value=0;
    }

    mybool(bool v){
        value=v;
    }

    mybool operator!(){
        return mybool(!value);
    }

    void display(){
        if(value){
            cout << "true" << endl;
        }
        else{
            cout << "false" << endl;
        }
    }
};

int main(){
    bool v;
    cout << "enter 0 or 1";
    cin >> v;

    mybool b(v);
    mybool b2=!b;
    cout << "after not operation:" ;
    b2.display();
    return 0;

}
