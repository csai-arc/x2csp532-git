// main.cpp
#include <iostream>
#include <string>
#include "utils.h"

using namespace std;

int main() {
    string name, password;
    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Password: ";
    cin >> password;
    // Read name and password from stdin
    
    if (login(name, password)) {
        cout << "Success!" << endl;
    } else {
        cout << "Login Failed :(" << endl;
    }
    
    return 0;
}
