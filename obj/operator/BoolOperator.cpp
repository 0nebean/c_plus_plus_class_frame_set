//
// Created by 0neBean on 2020/1/26.
//
#include <iostream>
#include "Operator.h"
using namespace std;

template<typename T, class C>
class BoolOperator : public Operator<T, C> {

public:
    //逻辑运算符
    bool operator!() {
        return !this->value;
    };


    bool operator&&(T obj) {
        cout << "&& type" << endl;
        return this->value && obj;
    };

    bool operator||(T obj) {
        cout << "|| type" << endl;
        return this->value || obj;
    };

    //o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0

    bool operator&&(C &obj) {
        cout << "&& class" << endl;
        return this->value && obj.value;
    };

    bool operator||(C &obj) {
        cout << "|| class" << endl;
        return this->value || obj.value;
    };

};
