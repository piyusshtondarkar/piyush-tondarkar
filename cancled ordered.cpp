#include <iostream>
using namespace std;

int main()
{
    int stack[5];
    int top = -1;

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter cancelled order for customer " << i + 1 << ": ";
        cin >> stack[i];
        top++;
    }

    cout << "\nCancelled Orders:\n";

    while(top >= 0)
    {
        cout << stack[top] << endl;
        top--;
    }

    return 0;
}
