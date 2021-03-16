#ifndef POINT_H
#define POINT_H
class Point
{
    public:
        Point(int,int);
        ~Point();
        void deplace(int,int);
        void affiche();
    private:
        int x;
        int y;
}; 
#endif