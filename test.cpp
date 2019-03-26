#include "test.h"
#include <iostream>
using namespace std;

Time::Time(){
    hours = minutes = 0;
}
Time::Time(int h, int m){
    hours = h;
    minutes = m;
}
Time Time::operator+(const Time &t) const{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %=60;
    return sum;
}
void Time::show() const{
    cout << hours << "hours, " << minutes << " minutes";
}
