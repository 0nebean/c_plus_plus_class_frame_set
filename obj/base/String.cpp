//
// Created by 0neBean on 2020/2/12.
//
#include "../operator/CharOperator.h"

using namespace std;

class String : public CharOperator<string, String> {
public:
    String(const char b[]) {
        this->value = b;
    };
};

