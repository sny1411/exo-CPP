#include <iostream>
#include <string>

struct Player
{
    int ptsVie{100};
    float ptsAttaque{10.5};
    std::string name {"Player"};
};


int main(){
    Player p1,p2,p3;
    std::cout << p1.name << " " << p1.ptsVie << std::endl;
    p1.name = "Sny";
    p1.ptsVie -= 56;
    std::cout << p1.name << " " << p1.ptsVie << std::endl;
    std::cout << p2.name << " " << p2.ptsVie << std::endl;
    p3.name = "p3";
    p3.ptsVie = 500;
    std::cout << p3.name << " " << p3.ptsVie << std::endl;
}