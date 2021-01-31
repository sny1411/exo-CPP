#include <iostream>
#include <Windows.h>
#include <string.h>
#include <limits.h>
#include <typeinfo>

 /*
les types de vrbs:
    les entiers: 
        int
        short int
        long int
        long long int (ou long long)
    on peut enlever la posibilité qu'ils soient signé avec unsigned
    les flottants:
        float
        double
        long double
    caractere:
        char
        signed char
        unsigned char
    booleen:
        bool
*/

int main(){
    std::string msg;
    std::cin >> msg;
    std::cout << std::endl << msg << std::endl;
    std::cout << LONG_MAX << std::endl;


    bool boolean {true};
    double floatant {2.32};
    const int nbre = 666;
    int nothing = { }; //variable initialiser à 0 (implicite)
    std::cout << nbre << std::endl;
    /*à noter que l'on peut aussi utilisé auto pour laisser le compilateur decider du type de variable à utiliser (C++11)*/

    auto addition = floatant + nbre;//exemple
    std::cout << typeid(addition).name() << std::endl; //d = double :)
    system("pause");
}