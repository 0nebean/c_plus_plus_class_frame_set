//
// Created by 0neBean on 2020/1/23.
//



#include "Operator.h"
#include <iostream>

using namespace std;

template<typename T, class C>
class FloatNumberOperator : public Operator<T, C> {


public:

    //单目运算符
    C &operator+() {
        this->value = +this->value;
        return *this;

    }

    C &operator-() {
        this->value = -this->value;
        return *this;
    }

    //o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0

    //双目算术运算符
    C &operator+(T obj) {
        this->value + obj;
        return *this;
    }

    C &operator-(T obj) {
        this->value - obj;
        return *this;
    }

    C &operator*(T obj) {
        this->value * obj;
        return *this;
    }

    C &operator/(T obj) {
        this->value / obj;
        return *this;
    }

    C &operator%(T obj) {
        this->value % obj;
        return *this;
    }

    //关系运算符
    bool operator>(T obj) {
        return this->value > obj;
    }

    bool operator>=(T obj) {
        return this->value >= obj;
    }

    bool operator<(T obj) {
        return this->value < obj;
    }

    bool operator<=(T obj) {
        return this->value <= obj;
    }

    //赋值运算符
    void operator+=(T obj) {
        cout << "+= type" << endl;
        this->value += obj;
    };

    void operator-=(T obj) {
        cout << "-= type" << endl;
        this->value -= obj;
    };

    void operator*=(T obj) {
        cout << "*= type" << endl;
        this->value *= obj;
    };

    void operator/=(T obj) {
        cout << "/= type" << endl;
        this->value /= obj;
    };

    void operator%=(T obj) {
        cout << "%= type" << endl;
        this->value %= obj;
    };



    //o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0

    //双目算术运算符
    C &operator+(C &obj) {
        this->value + obj.value;
        return *this;
    }

    C &operator-(C &obj) {
        this->value - obj.value;
        return *this;
    }

    C &operator*(C &obj) {
        this->value * obj.value;
        return *this;
    }

    C &operator/(C &obj) {
        this->value / obj.value;
        return *this;
    }

    C &operator%(C &obj) {
        this->value % obj.value;
        return *this;
    }

    //关系运算符
    bool operator>(C &obj) {
        return this->value <= obj.value;
    }

    bool operator>=(C &obj) {
        return this->value <= obj.value;
    }

    bool operator<(C &obj) {
        return this->value <= obj.value;
    }

    bool operator<=(C &obj) {
        return this->value <= obj.value;
    }


    //赋值运算符
    void operator+=(C &obj) {
        cout << "+= class" << endl;
        this->value += obj.value;
    };

    void operator-=(C &obj) {
        cout << "-= class" << endl;
        this->value -= obj.value;
    };

    void operator*=(C &obj) {
        cout << "*= class" << endl;
        this->value *= obj.value;
    };

    void operator/=(C &obj) {
        cout << "/= class" << endl;
        this->value /= obj.value;
    };

    void operator%=(C &obj) {
        cout << "%= class" << endl;
        this->value %= obj.value;
    };


};
