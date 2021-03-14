#include <iostream>
void testPtr(int *ptr);

int main(){
int n = 20;
std::cout << n << std::endl;
int *ad = &n; //creation d'un pointeur -> ad pointe sur n
*ad = 30; //on change la valeur que pointe ad, donc ici la valeur de n
std::cout << *ad << " "<< ad << " " << n << std::endl;
/* Donc
    *ad : designe la valeur contenu dans la variable pointé
    ad : designe l'adresse contenue dans le pointeur
*/
testPtr(ad);
std::cout << *ad << std::endl;
}

void testPtr(int *ptr){
    std::cout << *ptr << std::endl;
    *ptr += 20; //ajoute 20 à n par son pointeur
}