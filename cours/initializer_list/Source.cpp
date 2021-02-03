#include <iostream>
#include <Windows.h>


int main(){
    std::initializer_list<int> li = {1,3,5,'a'}; //creation de la liste
    std::cout << "liste li = ";
    for(int i : li) std::cout << i << " "; //lecture de la liste
    system("pause");
}