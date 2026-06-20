// utils.h
#ifndef UTILS_H
#define UTILS_H

#include <string>
#include "passwords.h"

using namespace std;

bool login(string name, string password) {
    // 1. Check if the user is present in the database
    if (userExists(name)) { 
        // 2. Check if the password matches the retrieved password
        return getPassword(name) == password;
    }
    return false;
}

#endif // UTILS_H
