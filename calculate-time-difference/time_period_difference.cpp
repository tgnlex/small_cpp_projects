#include <iostream>
using namespace std;
//finds difference between two time periods 

struct Time {
    int hour; 
    int mins; 
    int secs; 
};

Time findTimeDifference(Time t1, Time t2); 

int main() {
    Time t1, t2, diff; 

    cout << "Enter earlier time in hours, minutes and seconds" << endl; 
    cin >> t1.hour >> t1.mins >> t1.secs;

    cout << "Enter Your current time in hours, minutes and seconds" << endl; 
    cin >> t2.hour >> t2.mins >> t2.secs; 

    diff = findTimeDifference(t1, t2); 

    cout << "Difference = " << diff.hour << ":" << diff.mins << ":" << diff.secs << endl;
    return 0;
}
Time findTimeDifference(Time t1, Time t2) {
    Time diff; 
       if(t2.secs > t1.secs) {
           --t1.mins;
           t1.secs += 60; 
       }

        diff.secs = t1.secs - t2.secs;
        if(t2.mins > t1.mins) {
            --t1.hour; 
            t1.mins += 60; 
        }

        diff.mins = t1.mins-t2.mins;
        diff.hour = t1.hour-t2.hour;

        return diff; 

}
