#include <iostream>

using namespace std;

// 0 -> sunday
// 1 -> monday

string getDayOfWeek(int dayNum){
    string dayName;

    switch (dayNum){
        case 0 : 
            dayName = "Sunday";
        break;
        case 1 :
            dayName = "Monday";
            break;
        case 2 : 
            dayName = "Tuesday";
            break;
        case 3 : 
            dayName = "Wednesday";
            break;
        case 4 : 
            dayName = "Thursday";
            break;
        case 5 :
            dayName = "Friday";
            break;
        case 6 : 
            dayName = "Saturday";
        case 7 : 
            dayName = "Sunday";
        default : 
            dayName = "Invalid Day";

    }

    return dayName;
}

int main()
{
    cout << getDayOfWeek(5) << endl;

    return 0;
}