#pragma once
#include <iostream>

// Function declarations
int add(int n1, int n2);
int subtract(int n1, int n2);
int multiply(int n1, int n2);
double divide(int n1, int n2);
void displayMenu();
int getUserChoice();
void getNumbers(double &num1, double &num2);
void performOperation(int choice, double num1, double num2);