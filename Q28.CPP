#include <iostream>
using namespace std;
int main() {
    int numbers[5];
    int evenSum = 0;
    int oddSum = 0;
    cout << "Enter 5 elements for the data processing system:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];

        if (numbers[i] % 2 == 0) {
            evenSum += numbers[i];
        } else {
            oddSum += numbers[i];
        }
    }
    cout << "Sum of all Even numbers: " << evenSum << endl;
    cout << "Sum of all Odd numbers: " << oddSum << endl;
}
