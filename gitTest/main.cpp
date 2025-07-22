#include <iostream>
#include "add.h"
void printMessage(const std::string& msg) {
    std::cout << msg << std::endl;
}
void Testabb(const std::string& msg) {
    std::cout << msg << std::endl;
}
int main() {
    add b;
    b.Ptest();
    std::cout << "This is branch2mergeMaster!" << std::endl;
    printMessage("Hello from a new branch0722!");
    Testabb("Hello abb!");
    return 0;
}
