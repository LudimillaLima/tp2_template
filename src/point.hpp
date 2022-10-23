#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include <sstream>
#include<string>
#define PI 3.1415
using namespace std;

class Cartesien;
class Polaire;

class Point{
private:
    
public:
    virtual void afficher(ostream &)const = 0;
    virtual void convertir(Cartesien &)const = 0;
    virtual void convertir(Polaire &)const = 0;
};

ostream & operator<<(ostream &, const Point &);

#endif

