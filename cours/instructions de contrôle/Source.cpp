#include <iostream>
#include <Windows.h>

int main(){
    int c {60};
    int j {40};

    if (c == j){ // i n'est pas egal à j donc le code dans les crochets en dessous ne seront pas executé
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

    int i {}; //initialisation de i à 0
    auto p = i++; //i en post-incrementation
    std::cout << "i=" << i << std::endl;
    auto d = ++i; //i en pré-incrementation
    
    std::cout << "p=" << p << " d=" << d << std::endl;

    system("pause");
    
    /*
    mots clé pour les boucles: break , goto , continue
    */
    
    /*syntax des boucles :
    
    for (size_t i = 0; i < count; i++)
    {
        code
    }

    do
    {
        code
    } while (condition);

        while (condition)
    {
        code
    }
    
    /* 
    /*
    syntax des operateur de condition :

    if (condition)
    {
        code
    }
    else if (condition)
    {
        code
    }
    else 
    {
        code
    }

    switch (expression)
    {
    case  constant-expression :
         code 
        break;
    
    default:
        break;
    }

    Les boucles : 
    
   do
   {
        code 
   } while ( condition );

   while ( condition )
   {
        code 
   }


    for (int i = 0; i < 100; i++)
    {
         code 
    }
    */
   
   
}