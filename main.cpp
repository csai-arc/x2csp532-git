// main.cpp
#include <iostream>
#include <string>
#include "utils.h"

using namespace std;

int main() {
    string name, password;
    cout << "Enter username: ";
    cin >> name;

    cout << "Enter password: ";
    cin >> password;
    // Read name and password from stdin
    
    if (login(name, password)) {
        cout << "Success!" << endl;
    } else {
        cout << "Login Failed :(" << endl;
    }
    
    return 0;
}
