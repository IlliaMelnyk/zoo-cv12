//
// Created by xmelnyk on 14.12.2023.
//

#include "Operation.h"
Operation::Operation(std::string description){
    if(description.empty()){
        std::cerr<<"Error"<<std::endl;
    }else {
        m_description = description;
    }
}
std::string Operation::getDescription(){
    return m_description;
}