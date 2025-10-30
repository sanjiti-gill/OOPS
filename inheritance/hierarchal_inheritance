//hierarchal inheritance
#include<iostream>
#include<string>
using namespace std;

class person{
    protected:
    string name;
    int age;
    string gender;

    public:
    void personDetails(){
        cout << "enter name, age and gender: " ;
        cin >> name >> age >> gender;
    }
    void displayPersonDetails(){
        cout << "name is: " << name << endl;
        cout << "age is: " << age << endl;
        cout << "gender is: " << gender << endl;
    }
};

class employee:public person{
    protected:
    int salary;
    string department;
    string designation;

    public:
    void employeeDetails(){
        cout << "enter salary deparment and designation  of employee: " ;
        cin >> salary >> department >> designation;
    }

    void displayEmployeeDetails(){
        cout << "salary is: " << salary << endl;
        cout << "department is: " << department << endl;
        cout << "designation is: " << designation << endl;
    }
};

class student: public person{
    protected:
    string course;
    int semester;
    string grade;

    public:
    void studentDetails(){
        cout << "enter course semester and grade  of employee: " ;
        cin >> course >> semester >> grade;
    }

    void displayStudentDetails(){
        cout << "course is: " << course << endl;
        cout << "semester is: " << semester << endl;
        cout << "grade is: " << grade << endl;
    }
};

int main(){
    employee e;
    student s;

    e.personDetails();
    e.employeeDetails();

    s.personDetails();
    s.studentDetails();

    e.displayPersonDetails();
    e.displayEmployeeDetails();

    s.displayPersonDetails();
    s.displayStudentDetails();
    return 0;

}

