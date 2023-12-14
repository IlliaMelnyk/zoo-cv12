//
// Created by xmelnyk on 14.12.2023.
//

#ifndef CV12_OPERATION_H
#define CV12_OPERATION_H
#include "iostream"

class Operation {
std::string m_description;
public:
Operation(std::string description);
virtual float calculate(float n1,float n2)=0;
std::string getDescription();
};


#endif //CV12_OPERATION_H
