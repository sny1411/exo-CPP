#include <iostream>
#include <Windows.h>

//exemple de fonction basique
float fexple (float, int,int);

int main(){
    float x = 1.5;
    int n = 3,p = 5, q = 10;
    float y = fexple(x,n,p);
    std::cout << "valeur de y: " << y << std::endl;
    float z = fexple(x+0.5,q,n-1);
    std::cout << "valeur de z: " << z << std::endl;
    system("pause");
}

float fexple (float x,int b,int c){
    float val;
    val = x*x + b*x+c;
    return val;
}