#include "greeter.h"
#include <iostream>
#include <string>

int main(){
    std:: string userName;
    std::cout << "Please enter your name: ";
    std::cin >> userName;

    printPersonalizedGreeting(userName);
    return 0;
}