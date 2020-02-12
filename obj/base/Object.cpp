//
// Created by 0neBean on 2020/1/3.
//

#include "Object.h"


bool Object::equals(Object &obj) {
    return (this->self == obj.self);
}

Object::Object() {
    Object::self = this;
}

std::string Object::toString() {
    std::stringstream ss;
    ss << this->self;
    std::string string;
    ss >> string;
    return string;
}


Object::~Object() = default;
