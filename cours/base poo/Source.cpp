#include "Point.h"
#include "Hasard.h"

void f(Point *adp);

int main(){
    Point a(10,20) , b(40,60);
    a.affiche();
    a.deplace(10,50); 
    a.affiche();
    b.affiche();


    Hasard suite1(15,5);
    Hasard suite2(20,9);
    Hasard suite3(-2,0);
    suite1.affiche();
    suite2.affiche();
    suite3.affiche();

    Point c(1,4);
    f(&c);
    c.affiche();


}

void f(Point *adp){ //fonction qui transmet un objet par pointeur
    adp->affiche();
    adp->deplace(1,4);
    adp->affiche();
}