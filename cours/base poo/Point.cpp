#include "Point.h"
#include <iostream>

Point::Point(int abs,int ord ): x(abs), y(ord) {
    std::cout << "appel du constructeur" << std::endl;
}

Point::~Point(){
    std::cout << "appel du destructeur" << std::endl;
}

void Point::deplace(int dx,int dy){
    x += dx;
    y += dy;
}

void Point::affiche(){
    std::cout << "Je suis en " << x << " " << y << std::endl;
}