cmake_minimum_required(VERSION 3.15)
project(data_structure)

set(CMAKE_CXX_STANDARD 20)

add_executable(data_structure main.cpp list/arraylist/ArrayList.h list/arraylist/ArrayList.cpp exception/ArrayIndexOutOfBoundsException.cpp exception/Exception.h obj/base/Object.cpp obj/base/Object.h dependency/dependency.h obj/operator/Operator.cpp obj/operator/Operator.h obj/operator/FloatNumberOperator.cpp obj/operator/FloatNumberOperator.h obj/operator/CharOperator.cpp obj/operator/CharOperator.h obj/operator/BoolOperator.cpp obj/base/Boolean.cpp obj/base/Boolean.h obj/operator/IntNumberOperator.cpp obj/operator/IntNumberOperator.h obj/operator/BoolOperator.h obj/base/String.cpp obj/base/String.h obj/base/Integer.cpp obj/base/Integer.h obj/base/Float.cpp obj/base/Float.h obj/base/Double.cpp obj/base/Double.h)