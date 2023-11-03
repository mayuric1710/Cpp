#include <iostream>

void add(int &a, int &b, int &result) {
    result = a + b;
}

int main() {
    int num1, num2, sum;

    std::cout << "Enter two integer values: ";
    std::cin >> num1 >> num2;

    add(num1, num2, sum);

    std::cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}