#include <iostream>
#include <vector>

int Trouver_min(std::vector<int> &,int,int);
void Permuter_dans_tableau(std::vector<int> &,int,int);
void Tri_Selection(std::vector<int> &,int);

int main(){
    std::vector<int> tableau = {5,6,9,10,2,4,6,0,70,50,20,10,6};
    Tri_Selection(tableau,tableau.size());
    for (auto e : tableau) std::cout << e << std::endl;

}


int Trouver_min(std::vector<int> &tab,int indice_deb,int indice_fin){
    int idmin = indice_deb;
    int cpt = indice_deb +1;
    while (cpt <= indice_fin)
    {
        if (tab[cpt] < tab[idmin]){
            idmin = cpt;
           
        }
        cpt++;
    }
    return idmin;
}

void Permuter_dans_tableau(std::vector<int> &tab,int i1,int i2){
    int temp = tab[i1];
    tab[i1] = tab[i2];
    tab[i2] = temp;
}

void Tri_Selection(std::vector<int> &tab,int tailleTab){
    int indiceMin = 0;
    for (int cpt = 0; cpt < tailleTab-1; cpt++)
    {
        indiceMin = Trouver_min(tab,cpt,tab.size()-1);
        if (indiceMin != cpt) 
        {
            Permuter_dans_tableau(tab,indiceMin,cpt);
        }
    }
}