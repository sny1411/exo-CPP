#include <iostream>
#include <cstdlib> //pour la fonction rand
#include <vector>
#include "Hasard.h"
#include <memory>

Hasard::Hasard (int n, int m) : nb(n), max(m)
{ if (nb<=0) nb = 1 ; if (max<1) max = 1 ;
  val = std::vector<int>(nb) ;
  for (int i=0 ; i<nb ; i++) val[i] = double (rand()) / RAND_MAX * max ;
  std::cout << "appel constructeur" << std::endl;
}
void Hasard::affiche () // pour afficher les nb valeurs
{ for (int i=0 ; i<nb ; i++) std::cout << val[i] << " " ;
  std::cout << "\n" ;
}

Hasard::~Hasard(){
    std::cout << "appel destructeur" << std::endl;
}