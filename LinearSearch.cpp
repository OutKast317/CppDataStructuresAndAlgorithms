#include <iostream>

using namespace std;

int main() {
    int a[5], key, found = 0, position = -1;
//position works as a storage for input
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter number:";//input 5 khu htae ml and it will store the input in an index
        cin >> a[i];
    }

    cout << "\nEnter key:";//key = index position
    cin >> key;

    for (int i = 0; i < 5 && !found; i++) {
        if (a[i] == key) {
            found = 1;
            position = i + 1; // Store the position
            break;
        }
    }

    if (found) {
        cout << "\nFound at position " << position << endl;
    } else {
        cout << "\nNot Found" << endl;
    }

    return 0;
}
