/*Design a C++ program using multiple inheritance to store and display patient medical and insurance records.
Base class 1: Medical history (diseases, treatments)
Base class 2: Insurance info (policy, company)
Derived class: Combined patient profile.*/

//multiple inheritance

#include<iostream>
#include<string>
using namespace std;

class history{
    protected:
    string diseases;
    string treatments;

    public:
    void getHistory(){
        cout << "any previous diseases?: " ;
        cin >> diseases;
        cout << "any previous treatments taken?: " ;
        cin >> treatments;
    }

    void displayHistory(){
        cout << "previous diseases: " << diseases << endl;
        cout << "previous treatments: " << treatments << endl;
    }
};

class insurance{
    string policy;
    string company;

    public:
    void getInsurance(){
        cout << "which insurance policy" ;
        cin >> policy;
        cout << "which insurance company: " ;
        cin >> company;
    }

    void displayInsurance(){
        cout << "policy is:  " << policy << endl;
        cout << "insurance company: " << company << endl;
    }
};

class profile: public history, public insurance{
    public:
    void getProfile(){
        cout << "--- PATIENT PROFILE ENTRY ---" << endl;
        getHistory();
        getInsurance();
    }
    void displayProfile(){
        cout << "---PATIENT PROFILE---" << endl;
        displayHistory();     
        displayInsurance();  
    }
    
};

int main(){
    profile p;
    p.getProfile();
    p.displayProfile();
    return 0;
}
