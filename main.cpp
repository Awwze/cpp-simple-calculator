#include <iostream>

int main(){

    //a and b variables for nums
    float a, b, res;

    //variable for action
    char action;

    //output
    std::cout << "Welcome to my calculator! " << std::endl;
    std::cout << "Enter first number: " << std::endl;
    std::cin >> a;
    std::cout << "Nice, now enter second number: " << std::endl;
    std::cin >> b;
    std::cout << "Now choose the action (+,-,*,/): ";
    std::cin >> action;

    //action checker with "if"
    if (action == '+')
        res = a + b;
    else if (action == '-')
        res = a - b;
    else if (action == '*')
        res = a * b;
    else if (action == '/')
        res = a / b;

    //result output
    std::cout << "Your answer is: " << res << std::endl;
}