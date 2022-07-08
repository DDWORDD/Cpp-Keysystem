#include <iostream>


std::string user;
std::string key;

void prompt() {
    // user
    std::cout << "User Below\n\n";
    std::cout << ">  ";
    getline(std::cin, user);

    //key
    std::cout << "Key Below\n\n";
    std::cout << ">  ";
    getline(std::cin, key);
}


void check() {
    if (user == "user" && key == "key") { // info here
        std::cout << "Valid Key\n";
        std::cout << "Redirecting you to the program...\n";
    } else {
        std::cout << "Invalid Key resarting prompt\n";
        prompt();
        check();
    }

    if (user == "user" && key == "") {
        std::cout << "You forgot to enter a key" << std::endl;
        prompt();
        check();
    } else if(user == "" && key == "key") {
        std::cout << "You Forgot to enter a username" << std::endl;
        std::cout << std::endl;
        prompt();
        check();
    } else if (user == "" && key == "") {
        std::cout << "Invalid Credenetals\n";
        prompt();
        check();
    }
}

void Clear()
{
#if defined _WIN32
    system("cls");

#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");

#elif defined (__APPLE__)
    system("clear");
#endif
}





void program() {
    Clear();
    std::cout << "Welcome to the ";
    std::cout <<  user << "\n\n\n\n";

    std::cout << "Hit Enter To Continue." << std::endl;
    std::cin.ignore();

    Clear();



}




int main() {
    prompt(); // starts
    check(); // checks
    program();

    std::cout << "" << std::endl;
    return 0; // ends the code
}