#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        // Handle the base cases
        if (x == 0 && y == 0) {
            cout << 0 << endl;
        } else if (x > 0 && y == 0) {
            cout << x << endl;
        } else if (x == 0 && y > 0) {
            cout << y << endl;
        } else {
            // Handle the recursive cases
            int screens = y; // Each 2x2 icon requires a separate screen
            x += y % 2; // Adjust x if y is odd
            screens += (x / 2); // Recursively find screens for the smaller area
            cout << screens << endl;
        }
    }

    return 0;
}
