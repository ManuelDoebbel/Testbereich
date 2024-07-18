#include <iostream>

int main()
{
	char operation;
	double num1, num2;

	std::cout << "Enter the operation (+, -, *, /): ";
	std::cin >> operation;

	std::cout << "Enter the first number: ";
	std::cin >> num1;

	std::cout << "Enter the second number: ";
	std::cin >> num2;

	switch (operation) {
	case '+':
		std::cout << "Sum: " << num1 + num2;
		break;
	case '-':
		std::cout << "Difference" << num1 - num2;
		break;
	case '*':
		std::cout << "Product: " << num1 * num2;
		break;
	case '/':
		std::cout << "Quotient: " << num1 / num2;
		break;

	default:
		std::cout << "Invalid operation";
		break;
	}


}