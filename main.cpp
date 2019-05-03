#include <iostream>
#include "child.h"

int main() {
    //3_1
    child your_child[2];
    your_child[0].input();
    your_child[0].output();
    your_child[1].input();
    your_child[1].output();
    //3_2
    Tiles c1;
    c1.brand = "quadro";
    c1.size_h = 10;
    c1.size_w = 10;
    c1.price = 600;
    c1.get_Data();
    std::cout << std::endl;
    //3_3
    Complex num;
    num.set_Complex();
    num.get_Complex();
    //3_4
    Vector v1;
    Vector v2;
    Vector vsum;
    Vector vdif;
    std::cout << std::endl << std::endl;
    std::cout << "First vector" << std::endl;
    v1.set_Vector();
    v1.get_Vector();
    v1.abs();
    std::cout << std::endl << std::endl;
    std::cout << "Second vector" << std::endl;
    v2.set_Vector();
    v2.get_Vector();
    v2.abs();
    std::cout << std::endl;
    std::cout << std::endl;
    vsum.sum(v1, v2);
    std::cout << std::endl;
    vdif.difference(v1, v2);

    return 0;
}