#include <iostream>
#include <Windows.h>

void f (std::initializer_list<float> val){
    std::cout << val.size() << " Valeurs : ";
    for (float v: val) std::cout << v << " ";
    std::cout << std::endl;
}

int main(){
    std::initializer_list<int> li = {1,3,5,'a'}; //creation de la liste
    std::cout << "liste li = ";
    for(int i : li) std::cout << i << " "; //lecture de la liste
    system("pause");
    f({1.5,2.3});
    f({});
    f({1.25,5,9,3.4,7});
    system("pause");
}