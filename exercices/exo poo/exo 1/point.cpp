#include <iostream>
#include "point.h"

point::point(float argX,float argY): x(argX), y(argY){}

void point::deplace(float argX,float argY){
    x += argX;
    y += argY;
}

void point::affiche(){
    std::cout << "Le point se trouve en : " << x << " " << y << std::endl;
}