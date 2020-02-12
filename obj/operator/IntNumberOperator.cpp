//
// Created by 0neBean on 2020/1/26.
//


#include "FloatNumberOperator.h"

template<typename T, class C>
class IntNumberOperator : public FloatNumberOperator<T, C> {


public:


    //自增自减运算符
    C &operator++() {
        cout << "++ after" << endl;
        this->value++;
        return *this;
    };

    C &operator--() {
        cout << "-- after" << endl;
        this->value--;
        return *this;
    };

    C &operator++(T obj) {
        cout << "++ front" << endl;
        //记录修改前的对象
        IntNumberOperator tmp(*this);
        this->value++;
        //返回修改前的对象
        return tmp;
    };

    C &operator--(T obj) {
        cout << "-- front" << endl;
        //记录修改前的对象
        IntNumberOperator tmp(*this);
        this->value--;
        //返回修改前的对象
        return tmp;
    };


    //位运算
    C &operator~() {
        cout << "~" << endl;
        this->value = ~this->value;
        return *this;
    };

    //o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0
    C &operator|(C &obj) {
        cout << "| class" << endl;
        this->value = (obj.value | this->value);
        return *this;
    };

    C &operator&(C &obj) {
        cout << "& class" << endl;
        this->value = (obj.value & this->value);
        return *this;
    };

    C &operator^(C &obj) {
        cout << "^ class" << endl;
        this->value = (obj.value ^ this->value);
        return *this;
    };

    C &operator<<(C &obj) {
        cout << "<< class" << endl;
        this->value = (obj.value << this->value);
        return *this;
    };

    C &operator>>(C &obj) {
        cout << ">> class" << endl;
        this->value = (obj.value >> this->value);
        return *this;
    };

    C &operator&=(C &obj) {
        cout << "&= class" << endl;
        this->value = (obj.value &= this->value);
        return *this;
    };

    C &operator|=(C &obj) {
        cout << "|= class" << endl;
        this->value = (obj.value |= this->value);
        return *this;
    };

    C &operator^=(C &obj) {
        cout << "^= class" << endl;
        this->value = (obj.value ^= this->value);
        return *this;
    };

    C &operator<<=(C &obj) {
        cout << "<<= class" << endl;
        this->value = (obj.value <<= this->value);
        return *this;
    };

    C &operator>>=(C &obj) {
        cout << ">>= class" << endl;
        this->value = (obj.value >>= this->value);
        return *this;
    };

    //o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0
    C &operator|(T obj) {
        cout << "| type" << endl;
        this->value = (obj | this->value);
        return *this;
    };


    C &operator&(T obj) {
        cout << "& type" << endl;
        this->value = (obj & this->value);
        return *this;
    };

    C &operator^(T obj) {
        cout << "^ type" << endl;
        this->value = (obj ^ this->value);
        return *this;
    };

    C &operator<<(T obj) {
        cout << "<< type" << endl;
        this->value = (obj << this->value);
        return *this;
    };

    C &operator>>(T obj) {
        cout << ">> type" << endl;
        this->value = (obj >> this->value);
        return *this;
    };

    C &operator&=(T obj) {
        cout << "&= type" << endl;
        this->value = (obj &= this->value);
        return *this;
    };

    C &operator|=(T obj) {
        cout << "|= type" << endl;
        this->value = (obj |= this->value);
        return *this;
    };

    C &operator^=(T obj) {
        cout << "^= type" << endl;
        this->value = (obj ^= this->value);
        return *this;
    };

    C &operator<<=(T obj) {
        cout << "<<= type" << endl;
        this->value = (obj <<= this->value);
        return *this;
    };

    C &operator>>=(T obj) {
        cout << ">>= type" << endl;
        this->value = (obj >>= this->value);
        return *this;
    };


};