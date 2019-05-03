//
// Created by mikh- on 29.04.2019.
//

#ifndef LABA_3_CHILD_H
#define LABA_3_CHILD_H

#include <string>
//3_1
class child {
    std::string name;
    std::string sname;
    int age;
public:
    void input();
    void output();
};
//3_2
class Tiles {
public:
    std::string brand;
    double size_h;
    double size_w;
    double price;
    void get_Data();
};
//3_3
class Complex {
private:
    double Re;
    double Im;
public:
    void set_Complex();
    void get_Complex();
};
//3_4
class Vector{
public:
    double x;
    double y;
    void set_Vector();
    void get_Vector();
    void abs();
    void sum(Vector v1, Vector v2);
    void difference(Vector v1, Vector v2);
};

#endif //LABA_3_CHILD_H
