#ifndef POINT_H
#define POINT_H

class point
{
private:
    float x;
    float y;
public:
    point(float,float);
    void deplace(float,float);
    void affiche();
};

#endif