#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age please: ";
    cin >> age;

    bool IsCitizen;
    char input;
    cout << "Are you a citizen? (y/n): ";
    cin >> input;
    if (input == 'y' || input == 'Y') {
        IsCitizen = true;
    } else {
        IsCitizen = false;
    }

    if (age >= 18) {
        cout << "You reach our age boundaries." << endl;
        if (IsCitizen) {
            cout << "You are a citizen too, You can vote." << endl;
        } else {
            cout << "For voting, you must be a citizen too." << endl;
        }
    } else {
        cout << "You don't reach our age boundaries, You can't vote." << endl;
    }

    return 0;
}
