#include <vector>
#ifndef HASARD_H
#define HASARD_H
class Hasard
{
private:
    int nb; //nbre de valeurs entiere
    int max; //entre 0 et max
    std::vector<int> val; //pour les valeurs
public:
    Hasard(int,int);
    void affiche();
    ~Hasard();
};
#endif