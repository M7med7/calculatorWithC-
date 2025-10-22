#include "main.h"
int main(int argc, const char **argv)
{
    std::cout << "Welcome to the Simple Calculator!" << std::endl;
    int choice;
    double num1, num2;

    do{
        displayMenu();
        choice = getUserChoice();

        if(choice >=1 && choice <=4){
            getNumbers(num1, num2);
            performOperation(choice, num1, num2);
        } else if(choice != 5){
            std::cout << "Invalid choice! Please try again." << std::endl;
        }
    } while (choice != 5);

    std::cout << "Exiting the calculator. Goodbye!" << std::endl;
    return 0;
}

int add(int n1, int n2)
{
    return n1 + n2;
}

int subtract(int n1, int n2)
{
    return n1 - n2;
}

int multiply(int n1, int n2)
{
    return n1 * n2;
}

double divide(int n1, int n2)
{
    return static_cast<double>(n1) / n2;
}

void displayMenu()
{
    std::cout << "Calculator Menu:" << std::endl;
    std::cout << "1. Add" << std::endl;
    std::cout << "2. Subtract" << std::endl;
    std::cout << "3. Multiply" << std::endl;
    std::cout << "4. Divide" << std::endl;
    std::cout << "5. Exit" << std::endl;
}

int getUserChoice()
{
    int choice;
    std::cin >> choice;
    return choice;
}

void getNumbers(double &num1, double &num2)
{
    std::cout << "Enter First number: ";
    std::cin >> num1;
    std::cout << "Enter Second number: ";
    std::cin >> num2;
}

void performOperation(int choice, double num1, double num2)
{
    switch (choice) {
    case 1:
         std::cout << "Result: " << num1 << " + " << num2 << " = " << add(static_cast<int>(num1), static_cast<int>(num2)) << std::endl;
        break;
    case 2:
        std::cout << "Result: " << num1 << " - " << num2 << " = " << subtract(static_cast<int>(num1), static_cast<int>(num2)) << std::endl;
        break;
    case 3:
        std::cout << "Result: " << num1 << " * " << num2 << " = " << multiply(static_cast<int>(num1), static_cast<int>(num2)) << std::endl;
        break;
    case 4:
        if (num2 != 0) {
            std::cout << "Result: " << num1 << " / " << num2 << " = " << divide(static_cast<int>(num1), static_cast<int>(num2)) << std::endl;
        } else {
            std::cout << "Error: Division by zero!" << std::endl;
        }
        break;
    default:
        std::cout << "Invalid choice!" << std::endl;
    }
}
