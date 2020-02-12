//
// Created by 0neBean on 2020/1/26.
//

#include "../operator/BoolOperator.h"

class Boolean : public BoolOperator<bool, Boolean> {
public:
    Boolean(const bool b) {
        this->value = b;
    };
};



