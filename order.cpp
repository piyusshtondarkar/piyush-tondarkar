#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> orders;
    string order;

    // Taking 5 customer orders
    for (int i = 1; i <= 5; i++) {
        cout << "Enter order for customer " << i << ": ";
        cin >> order;
        orders.push(order);
    }

    // Processing orders
    cout << "\nProcessing Orders:\n";

    while (!orders.empty()) {
        cout << "Processing: " << orders.front() << endl;
        orders.pop();
    }

    return 0;
}
