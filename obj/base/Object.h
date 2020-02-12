//
// Created by 0neBean on 2020/1/3.
//

#ifndef DATA_STRUCTURE_OBJECT_H
#define DATA_STRUCTURE_OBJECT_H
#include <string>
#include <sstream>
//#include "../operator/Operator.h"

class Object{

private:
    Object *self = nullptr;
public:
    //构造函数
    Object();
    //析构函数
    virtual ~Object();
    //引用比较
    bool  equals(Object &obj);
    //转换为字符串
    virtual std::string toString();

};


#endif //DATA_STRUCTURE_OBJECT_H
