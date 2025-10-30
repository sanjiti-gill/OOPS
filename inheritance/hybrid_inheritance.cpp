//hierarchal inheritance
#include<iostream>
#include<string>
using namespace std;

class student{
    protected:
    string name;
    int prn;

    public:
    void getStudentDetails(){
        cout << "enter student name and prn: " ;
        cin >> name >> prn;
    }

    void displayStudentDetails(){
        cout << "name is: " << name << endl;
        cout << "prn is: " << prn << endl;
    }
};

class UTmarks:virtual public student{
    protected:
    int marks[3];

    public:
    void getMarks(){
        for (int i=0;i<3;i++){
            cout << "enter marks: ";
            cin >> marks[i];
        }
    }

    void displayMarks(){
        for (int i=0;i<3;i++){
            cout << "marks of " << i+1 << " subject: " << marks[i] << endl;
        }
    }
};

class sports: virtual public student{
    protected:
    int score;

    public:
    void getScore(){
        cout << "enter sports score: " ;
        cin >> score;
    }

    void displayScore(){
        cout << "the score is: " << score << endl;
    }
};

class result: public UTmarks, public sports{
    private:
    int total;

    public:
    void calculate() {
    int markss = 0;
    for (int i = 0; i < 3; i++) {
        markss += marks[i];
    }
    total = markss + score;
}


    void display(){
        cout << "result is: " << total << endl;
    }
};

int main(){
    result r;
    r.getStudentDetails();

    r.getMarks();

    r.getScore();

    r.calculate();
    r.displayStudentDetails();
    r.displayMarks();
    r.displayScore();
    r.display();
    return 0;
}


