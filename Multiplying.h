//
// Created by xmelnyk on 14.12.2023.
//

#ifndef CV12_MULTIPLYING_H
#define CV12_MULTIPLYING_H
#include "Operation.h"

class Multiplying: public Operation {
public:
    Multiplying();
    float calculate(float n1,float n2);
};


#endif //CV12_MULTIPLYING_H
