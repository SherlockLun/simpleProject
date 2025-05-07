#include "calculator.h"
#include <iostream>

int main()
{
    Calculator calc;
    int result = calc.add(3, 4);
    std::cout << "Result: " << result << std::endl;
    return 0;
}