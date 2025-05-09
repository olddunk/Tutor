#include <iostream>
#include "User.h"
#include "App.h"
#include "Admin.h"
#include "Customer.h"
#include "Doctor.h"

using namespace std;

User* login(const string& filename) {
    string username, password;
    cout << "Login\nUsername: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    auto users = User::readUsersFromFile(filename);
    for (auto& user : users) {
        if (user.getName() == username && user.getPassword() == password) {
            cout << "Login successful!\n";
            return new User(user);  // Return a copy of the matched user
        }
    }

    cout << "Login failed.\n";
    return nullptr;
}

int main() {
    string filename = "user.txt";
    User* loggedUser = login(filename);
    if (!loggedUser) return 0;
    
    App app(*loggedUser);
    // cout << "Welcome! " << app.currentUser.name << endl;
    app.run();
    // switch (loggedUser->role) {
    //     case Role::Admin: {
    //         Admin admin(loggedUser->id, loggedUser->getName(), loggedUser->getPassword(), loggedUser->tel);
    //         admin.run();
    //         break;
    //     }

    //     case Role::Customer:
    //         cout << "Welcome, customer!\n";
    //         break;
    //     case Role::Doctor:
    //         cout << "Welcome, doctor!\n";
    //         break;
    // }

    app.logout();
    delete loggedUser;
    return 0;
}
