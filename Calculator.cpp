//
// Created by xmelnyk on 14.12.2023.
//

#include "Calculator.h"
Calculator::Calculator(){
    m_number1=0;
    m_number2=0;
    m_operations.push_back(new Adding());
    m_operations.push_back(new Multiplying());
}
Calculator::~Calculator(){

}
void Calculator::run(){
readNumber();
printAllOperations();
chooseOperation();
callAllOperation();
}
void Calculator::readNumber(){
std::cout<<"Write first number: ";
std::cin>>m_number1;
std::cout<<"Write second number: ";
std::cin>>m_number2;
}

void Calculator::printAllOperations(){
    std::cout<<"Operation: ";
    int a=1;
for(auto operation:m_operations){
    std::cout<<a<<"]"<<operation->getDescription()<<std::endl;
    a++;
}
}
void Calculator::chooseOperation(){
std::cout<<"What operation you want to do: ";
int chosenNumber=0;
do{
    std::cout<<"Choose operation by its number ";
    std::cin>>chosenNumber;
}while(chosenNumber<1|| chosenNumber>m_operations.size());
m_chosenOperation= m_operations.at(chosenNumber-1);


}
void Calculator::callAllOperation(){
float result = m_chosenOperation->calculate(m_number1,m_number2);
std::cout<<"Result: "<< result <<std::endl;
}
