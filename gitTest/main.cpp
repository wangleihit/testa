#include <iostream>
#include "add.h"
void printMessage(const std::string& msg) {
    std::cout << msg << std::endl;
}
void TestBBA(const std::string& msg) {
    std::cout << msg << std::endl;
}
int main() {
    add b;
    b.Ptest();
    std::cout << "This is branch2mergeMaster!" << std::endl;
    printMessage("Hello from a new branch0722!");
    Testabb("Hello bba!");
    return 0;
}
