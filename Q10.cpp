#include <iostream>
using namespace std;
bool isLeapYear(int Y) {
    if ((Y % 400 == 0) || (Y % 4 == 0 && Y % 100 != 0)) {
        return true;
    }
else
    return false;
}

int main() {
    int YEAR;
    cout << "ENTER THE YEAR : ";
    cin >> YEAR;
    if (isLeapYear(YEAR)) {
        cout << YEAR << " is a Leap Year (February has 29 days) " << endl;
    } else {
        cout << YEAR << " is NOT a Leap Year (February has 28 days) " << endl;
    }
}
