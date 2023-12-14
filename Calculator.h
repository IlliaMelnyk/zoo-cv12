//
// Created by xmelnyk on 14.12.2023.
//

#ifndef CV12_CALCULATOR_H
#define CV12_CALCULATOR_H
#include "iostream"
#include "vector"
#include "Operation.h"
#include "Adding.h"
#include "Multiplying.h"
class Calculator{
    float m_number1;
    float m_number2;
    std::vector<Operation*> m_operations;
    Operation* m_chosenOperation;
public:
    Calculator();
    ~Calculator();
    void run();
private:
    void readNumber();
    void printAllOperations();
    void chooseOperation();
    void callAllOperation();

};


#endif //CV12_CALCULATOR_H
