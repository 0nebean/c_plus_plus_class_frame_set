//
// Created by 0neBean on 2020/2/12.
//

#include "../operator/FloatNumberOperator.h"

using namespace std;

class Double : public FloatNumberOperator<float, Double> {
public:
    Double(const double b) {
        this->value = b;
    };
};