//
// Created by mikh- on 29.04.2019.
//

#include <iostream>
#include "child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"
//3_1
void child::output() {
    std::cout << "Child data:" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "SecondName: "  << sname << std::endl;
    std::cout << "Age: "  << age << std::endl;
};
void child::input() {
    std::cout << "Enter child data" << std::endl;
    std::cin >> name;
    std::cin >> sname;
    std::cin >> age;
};
//3_2
void Tiles::get_Data() {
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Height: " << size_h << std::endl;
    std::cout << "Width: " << size_w << std::endl;
    std::cout << "Price: " << price << std::endl;
};
//3_3
void Complex::set_Complex() {
    std::cout << "Real part: ";
    std::cin >> Re;
    std::cout << "Imaginary part: ";
    std::cin >> Im;
};
void Complex::get_Complex() {
    std::cout << "Re: " << Re << std::endl;
    std::cout << "Im: " << Im << std::endl;
    std::cout << "Module: " << sqrt(Re*Re + Im*Im) << std::endl;
};

void Vector::abs()
{
    double a = sqrt(x * x + y * y);
    std::cout << "abs: " << a;
};

void Vector::sum(Vector v1, Vector v2)
{
    x = v1.x + v2.x;
    y = v1.y + v2.y;
    std::cout << "Sum:" << std::endl;
    get_Vector();
};

void Vector::difference(Vector v1, Vector v2)
{
    x = v1.x - v2.x;
    y = v1.y - v2.y;
    std::cout << "Diff: " << std::endl;
    get_Vector();
};
void Vector::set_Vector()
{
    std::cout << "Enter coords"<< std::endl;
    std::cout << "Enter X: ";
    std::cin >> x;
    std::cout << "Enter Y: ";
    std::cin >> y;
}

void Vector::get_Vector()
{
    std::cout << "X = " << x << std::endl;
    std::cout << "Y = " << y << std::endl;
}
