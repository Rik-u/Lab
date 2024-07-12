#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Time {
private:
    int hour, minute, second;

public:
    Time(int hour, int minute, int second) {
        minute += second/60; 
        hour += (minute/60);
        this->hour = hour;
        this->minute = minute%60;
        this->second = second%60;
    }

    Time(int duration) {
        hour = duration/3600;
        minute = (duration/60) - (hour*60);
        second = duration - (minute*60) - (hour*3600);
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    void setHour(int hour) {
        this->hour = hour;
    }

    void setMinute(int minute) {
        this->hour = this->hour + (minute/60);
        this->minute = minute%60;

    }

    void setSecond(int second) {
        this->minute = this->minute + (second/60);
        this->hour = this->hour + (minute/60);
        this->minute = (this->minute)%60;
        this->second = second%60;
    }

    int getHour() {
        return hour;
    }

    int getMinute() {
        return minute;
    }

    int getSecond() {
        return second;
    }

    int getDuration() {
        return second + (minute * 60) + (hour * 3600);
    }

    Time add(Time other) {
        return Time(other.getDuration() + this->getDuration());
    }

    int subtract(Time other) {
        if (this->getDuration() < other.getDuration()) 
            return 86400-other.getDuration();
        else
            return this->getDuration() - other.getDuration();
    }

    int equals(Time other) {
        return (this->getDuration() == other.getDuration());
    }

    string toString() {
        stringstream ss;
        ss << setfill('0') << setw(2) << this->hour << ":" << setw(2) << this->minute << ":" << setw(2) << this->second << endl;
        string result;
        ss >> result;
        return result;
    }
};

int main() {
    Time time1(10, 61, 61);
    Time time2(3692);cout << time1.toString() << endl;
    cout << time2.getDuration() << endl;
    cout << time1.add(3692).getDuration() << endl;
    cout << time2.subtract(4125) << endl;
    cout << time1.equals(4125) << endl;
    time1.setHour(5);
    cout << time1.toString() << endl;
    

    
}