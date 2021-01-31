#include <iostream>

int main(){
    int i {60};
    int j {40};

    if (i == j){ // i n'est pas egal à j donc le code dans les crochets en dessous ne seront pas executé
        std::cout << "i est egal a j" << std::endl;
    }
    else{ //sinon
        std::cout << "i pas egal a j" << std::endl;
    }
    int nbre;
    std::cout << "choisie un nbre entier entre 1 et 3 :";
    std::cin >> nbre;

    switch (nbre)
    {
    case 1:
        std::cout << "WAW 1" << std::endl;
        break;
    case 2:
        std::cout << "WAW 2" << std::endl;
        break;
    case 3:
        std::cout << "WAW 3" << std::endl;
    default:
        std::cout << "ta pas ecouter toi :(" << std::endl;
        break;
    }
    
}