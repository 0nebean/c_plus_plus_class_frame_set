//
// Created by 0neBean on 2020/2/12.
//

#include "../operator/IntNumberOperator.h"

using namespace std;

class Integer : public IntNumberOperator<int, Integer> {
public:
    Integer(const int b) {
        this->value = b;
    };
};

