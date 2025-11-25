#include<iostream>
using namespace std;

class time{
    int hours, minutes;

public:
    time(){
        hours = 0;
        minutes = 0;
    }

    time(int h, int m){
        hours = h;
        minutes = m;
    }

    friend time add(time t1, time t2);

    void display(){
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};

time add(time t1, time t2){
    time temp;

    temp.hours = t1.hours + t2.hours;
    temp.minutes = t1.minutes + t2.minutes;

  
    if(temp.minutes >= 60){
        temp.hours += temp.minutes / 60;
        temp.minutes = temp.minutes % 60;
    }

    return temp;
}

int main(){
    time t1(2, 30);
    time t2(3, 40);

    time t3;
    t3 = add(t1, t2);

    cout << "Total Time = ";
    t3.display();

    return 0;
}
