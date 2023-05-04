#include <iostream>

void calc();
int x = 1;
std::string yorn;
bool reset = true;

int main() {

    while (reset == true)
    {
        calc();
    }
    
}

void calc() {
    float a;
    std::string sym;
    float b;

    std::cout << "First number: ";
    std::cin >> a;
    std::cout << "Operation symbol (+; -; *; /): ";
    std::cin >> sym;
    std::cout << "Second number: ";
    std::cin >> b;
    std::cout << "--------------------------------\n";
    
    if (sym == "+") 
    {
        std::cout << (a + b) << "\n";
    } else if (sym == "-")
    {
        std::cout << (a - b) << "\n";
    } else if (sym == "*")
    {
        std::cout << (a * b) << "\n";
    } else if (sym == "/")
    {
        if (b != 0) {
            std::cout << (a / b) << "\n";
        } else {
            std::cout << "Can't divide by 0!\n";
        }
    } else {
        std::cout << "Invalid operation symbol!\n";
    }
    
    std::cout << "\nContinue? (y/n)\n";
    std::cin >> yorn;
    if (yorn == "y") {
        reset = true;
    } else
    {
        reset = false;
    }
    
}
