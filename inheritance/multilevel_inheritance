//multilevel inheritance
#include<iostream>
#include<string>
using namespace std;

class student{
    protected:
    string name;
    int roll;

    public:
    void getStudentData(){
        cout << "enter the name of student: " ;
        cin >> name;
        cout << "enter roll no of student: ";
        cin >> roll;
    }
};

class marks: public student{
    protected:
    int marks[3];

    public:
    void getStudentMarks(){
        for(int i=0;i<3;i++){
            cout << "enter marks of " << i+1 << "subject: " ;
            cin >> marks[i];
        }
    }
};

class result:public marks{
    private:
    float total, percentage;

    public:
    void getMarks(){
    total = 0;
    for(int i = 0; i < 3; i++) {
        total += marks[i];
    }
    percentage = (total / 300.0) * 100;
    }
    void displayResult(){
        cout << "percentage of student is: " << percentage << endl;
    }
};

int main(){
    result r;
    r.getStudentData();
    r.getStudentMarks();
    r.getMarks();
    r.displayResult();
    return 0;
}

