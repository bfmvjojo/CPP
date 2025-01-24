#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter integers (Ctrl+D to end on Linux/macOS, Ctrl+Z on Windows): " << endl;

    // Read integers until end of input or invalid input
    while (cin >> x) {
        cout << "You entered: " << x << endl;
    }

    cout << "Input ended or invalid input detected." << endl;
    return 0;
}