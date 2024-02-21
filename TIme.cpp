#include <iostream>
using namespace std;

class Time{
public:
        int hours;
        int minutes;
        Time(int h, int m):hours(h),minutes(m){} //constructor
        //overloading +
        Time operator+(const Time& t){
                int totalMinutes = minutes+t.minutes;
                int totalHours = hours+t.hours+totalMinutes/60;
                totalMinutes = totalMinutes%60;
                return Time (totalHours, totalMinutes);
        }
};

int main(){
    Time t1(2,30);
    Time t2(3,45);
    Time t3 = t1+t2;
    cout <<"Total time = "<<t3.hours<<"hrs, "<<t3.minutes << "minutes " << endl;

return 0;
}