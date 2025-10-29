//multiple inheritance
#include<iostream>
#include<string>
using namespace std;

class item{
    protected:
    string title;
    int price;
};

class sale{
    protected:
    int sales[3];
};

class hwitem: public item, public sale{
    public:
    void getData(){
        cout << "enter title of hardware item: " ;
        cin >> title;
        cout << "enter price of hardware item: ";
        cin >> price;
        for(int i=0;i<3;i++){
            cout << "enter sale of " << i+1 << "month: " ;
            cin >> sales[i];
        }
    }

    void displayData(){
        cout << "the title hw is " << title << endl;
        cout << "the price hw is " << price << endl;
        for(int i=0;i<3;i++){
            cout << "sale of " << i+1 << "month is: " << sales[i] << endl;
        }
    }
};

class switem: public item, public sale{
    public:
    void getData(){
        cout << "enter title of software item: " ;
        cin >> title;
        cout << "enter price of software item: ";
        cin >> price;
        for(int i=0;i<3;i++){
            cout << "enter sale of " << i+1 << "month: " ;
            cin >> sales[i];
        }
    }

    void displayData(){
        cout << "the title sw is " << title << endl;
        cout << "the price sw is " << price << endl;
        for(int i=0;i<3;i++){
            cout << "sale of " << i+1 << "month is: " << sales[i] << endl;
        }
    }
};

int main(){
    hwitem h;
    switem s;
    h.getData();
    h.displayData();
    s.getData();
    s.displayData();
    return 0;
}
