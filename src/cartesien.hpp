#ifndef CARTESIEN_TP2
#define CARTESIEN_TP2
#include <iostream>
#include <sstream>
#include<string>
#include <point.hpp>
#define PI 3.1415

using namespace std;
class Cartesien: public Point{
    private:
        double x;
        double y;
    public:
        Cartesien(double, double);
        Cartesien();
        Cartesien(Polaire &);
        double getX() const;
        double getY() const;
        void setX(double);
        void setY(double);
        void afficher(ostream & )const override;
        void convertir(Polaire &)const override;
        void convertir(Cartesien &)const override;
        //friend ostream & operator<<(ostream &, const Cartesien &);
};
#endif