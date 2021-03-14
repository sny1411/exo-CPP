#include <iostream>
#include <vector>

int main(){
    std::vector<int> test(10); //creation d'un vecteur contenant 10 emplacements
    std::vector<int> v {1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1}; //vecteur initialisé avec des valeurs

    for (auto e : v) std::cout << e << " "; std::cout << std::endl;
    for (auto e : test) std::cout << e << " "; std::cout << std::endl;

    std::cout << v.size() << std::endl;
}




