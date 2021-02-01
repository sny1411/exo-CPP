#include <iostream>
#include <Windows.h>

//exemple de fonction basique
float fexple (float, int,int);
void echange(int &,int &);
void fct();

int main(){
//premiere fonction
    float x = 1.5;
    int n = 3,p = 5, q = 10;
    float y = fexple(x,n,p);
    std::cout << "valeur de y: " << y << std::endl;
    float z = fexple(x+0.5,q,n-1);
    std::cout << "valeur de z: " << z << std::endl;
    system("pause");

//deuxieme fonction
    int j=10,m=20;
    std::cout << "avant appel : " << j << " " << m << std::endl;
    echange(j,m);
    std::cout << "apres appel : " << j << " " << m << std::endl;
    system("pause");
//troisieme fonction
for (int r = 0; r < 10; r++)
{
    fct();
}
system("pause");

}

float fexple (float x,int b,int c){
    float val;
    val = x*x + b*x+c;
    return val;
}

//exemple de transmission par reference
void echange(int & a,int & b){
    int c;
    std::cout << "debut echange : " << a << " " << b << std::endl;
    c = a ; a = b ; b = c;
    std::cout << "fin echange : " << a << " " << b << std::endl;
}

void fct(){ //exemple variable statique
    static int i; //grace a static, i est augmenté de 1 à chaque appel sans etre remis à 0
    i++;
    std::cout << "appel numero : " << i << std::endl;
}