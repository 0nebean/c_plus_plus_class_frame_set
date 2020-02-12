//
// Created by 0neBean on 2020/1/11.
//

#include <iostream>
#include "../base/Object.h"

using namespace std;

template<typename T, class C>
class Operator : public Object {

public:

    bool operator==(T obj) {
        cout << "== type" << endl;
        return this->value == obj;
    };

    bool operator!=(T obj) {
        cout << "!= type" << endl;
        return this->value != obj;
    };

    //o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0

    bool operator==(C &obj) {
        cout << "== class" << endl;
        return this->value == obj.value;
    };

    bool operator!=(C &obj) {
        cout << "!= class" << endl;
        return this->value != obj.value;
    };

    string toString() override {
        std::stringstream ss;
        ss << this->value;
        std::string string;
        ss >> string;
        return string;
    }

protected:
    T value;
};

