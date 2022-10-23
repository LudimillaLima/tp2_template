#ifndef POLAIRE_TP
#define POLAIRE_TP
#include <iostream>
#include <sstream>
#include<string>
#include <point.hpp>
#include <cartesien.hpp>
#define PI 3.1415

using namespace std;

class Polaire: public Point{
    private:
        double angle;
        double distance;
    public:
        Polaire(double, double);
        
        Polaire();
        Polaire(Cartesien &);
        double getAngle()const;
        double getDistance()const;
        void setAngle(double);
        void setDistance(double);
        void afficher(ostream &)const override;
        void convertir(Polaire &)const override;
        void convertir(Cartesien &)const override;
        //friend ostream & operator<<(ostream &, const Polaire &);
};
#endif

