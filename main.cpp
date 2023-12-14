#include <iostream>
#include "Calculator.h"
int main() {
    Calculator* calculator= new Calculator();
    calculator->run();
    delete calculator;
    return 0;
}
