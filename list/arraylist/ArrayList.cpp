//
// Created by 0neBean
//


#include<string>
#include "../../exception/Exception.h"

#define DEFAULT_INIT_ARRAY_SIZE 8


template<class Object>
class ArrayList {
private:
    //实例
    Object *instance = nullptr;
    Object *expandArray = nullptr;
    //节点的数量
    int current_node_sum = 0;
    //数组的大小
    int current_array_size = 0;

    //初始化方法
    void init() {
        instance = new Object[DEFAULT_INIT_ARRAY_SIZE];
        current_array_size = DEFAULT_INIT_ARRAY_SIZE;
        current_node_sum = 0;
    }

    //销毁方法
    void destroy() {
        delete[] instance;
    }

    //拓展数组
    void expand() {
        //成倍拓展 创建临时数组 内存拷贝 删除临时数组
        current_array_size = current_array_size * 2;
        expandArray = new Object[current_array_size];
        copyArray();
        Object *temp = expandArray;
        expandArray = instance;
        instance = temp;
        delete[] expandArray;
    }

    //拷贝数组
    void copyArray() {
        for (int i = 0; i < current_node_sum; i++) {
            expandArray[i] = instance[i];
        }
    }

public:
    //构造函数
    ArrayList() {
        this->init();
    }

    //析构函数
    virtual ~ArrayList() = default;

    //包含元素数量
    int size() {
        return current_node_sum;
    }

    //是否为空
    bool isEmpty() {
        return current_node_sum > 0;
    }

    //添加节点指针
    int add(Object node) {
        if (current_array_size == current_node_sum) {
            expand();
        }
        instance[current_node_sum] = node;
        current_node_sum++;
        return current_node_sum;
    }

    //添加节点
    Object get(int index) {
        if (index + 1 > current_node_sum) {
            throw ArrayIndexOutOfBoundsException(std::string("the index out of arrayList size"));
        }
        return instance[index];
    }


    //清楚队列
    void clear() {
        this->destroy();
        this->init();
    }

    //获取数组元素下标
    int indexOf(Object node) {
        Object *ptr = instance;
        for (int i = 0; i < current_node_sum; ++i) {
            if (node.equals(*ptr)) {
                return i;
            }
            ptr++;
        }
        return -1;
    }

    int lastIndexOf(Object node) {
        Object *ptr = &instance[current_node_sum - 1];
        for (int i = current_node_sum; i > 0; i--) {
            if (node.equals(*ptr)) {
                return i;
            }
            ptr--;
        }
        return -1;
    }

    Object *toArray() {
        return instance;
    }

    std::string toString() {
        std::string str;
        str.append("[");
        for (int i = 0; i < current_node_sum; ++i) {
            str.append(instance[i].toString()).append(", ");
        }
        str = str.substr(0, str.length() - 2);
        str.append("]");
        return str;
    }

};





