//
// Created by 0neBean on 2020/2/12.
//


#include "../operator/FloatNumberOperator.h"

using namespace std;

class Float : public FloatNumberOperator<float, Float> {
public:
    Float(const float b) {
        this->value = b;
    };
};