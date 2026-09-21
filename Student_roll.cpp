#include <iostream>
using namespace std;

int main() {
    int roll[5], searchRoll;
    bool found = false;

    // Input roll numbers
    cout << "Enter roll numbers of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> roll[i];
    }

    // Search for roll number
    cout << "Enter roll number to search: ";
    cin >> searchRoll;

    for (int i = 0; i < 5; i++) {
        if (roll[i] == searchRoll) {
            found = true;
            break;
        }
    }

    // Display result
    if (found)
        cout << "Student Found";
    else
        cout << "Student Not Found";

    return 0;
}
