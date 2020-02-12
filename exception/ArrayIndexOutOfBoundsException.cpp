//
// Created by 0neBean on 2019/12/26.
//

#include <iostream>

class ArrayIndexOutOfBoundsException : public std::out_of_range {

public:
    explicit ArrayIndexOutOfBoundsException(const std::string &arg): out_of_range(arg) {}

    explicit ArrayIndexOutOfBoundsException(const char *string) : out_of_range(string) {}

};
