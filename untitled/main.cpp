#include <iostream>
#include <string>
#include <cstdlib>
#include <filesystem>
int main() {
    system("python scripts/hello.py");
    std::string input;
    std::cout << "Want to play Password test??? ";
    std::cin >> input;
    if (input == "no") {
    return 12;}
    else if (input == "No") {
        return 123;
    }

    std::string name = "also input";
    std::cout << "What is your name? ";
    std::cin >> name;

std::string pass;
    std::cout << "What is your password? ";
    std::cin >> pass;
if (name == pass) {
    std::cout << "Your name and password are the same. Try again ";
    std::cin >> pass;
}
    std::string hello = ("");
    std::cout << "Enter password, " << name << " ";
    std::cin >> hello;
    while (hello != pass)
    if (hello != pass) {
        std::cout << "Incorrect password. ";
        std::cin >> hello;
    }
    if (hello == "password") {
        std::cout << "the heck\n";
    }
    else  {
            std::cout << "Password is correct."
                         ""
                         ;
        return 0;}

//std 6

    }

