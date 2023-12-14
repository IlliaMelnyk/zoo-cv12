//
// Created by xmelnyk on 14.12.2023.
//

#ifndef CV12_ADDING_H
#define CV12_ADDING_H
#include "Operation.h"
#include "iostream"

class Adding: public Operation {
public:
    Adding();
    float calculate(float n1,float n2);

};


#endif //CV12_ADDING_H
