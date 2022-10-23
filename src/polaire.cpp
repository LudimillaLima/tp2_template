#include <polaire.hpp>
#include <point.hpp>
#include <iostream>
#include <cmath>

Polaire::Polaire(double a, double d):angle(a), distance(d){

}


Polaire::Polaire():Polaire(0.0,0.0){

}

double Polaire::getAngle()const{
    return angle;
}
double Polaire::getDistance()const{
    return distance;
}
void Polaire::setAngle(double a){
    angle=a;
}
void Polaire::setDistance(double d){
    distance=d;
}
/*ostream & operator<<(ostream & o, const Polaire & x){
   
    return o;
}*/
void Polaire::afficher(ostream & o) const{
    o<<"(a="<<getAngle()<<";d="<<getDistance()<<")";
} 
void Polaire::convertir(Cartesien & c) const {
    c.setX(distance*cos(angle*PI/180));
    c.setY(distance*sin(angle*PI/180));
}
void Polaire::convertir(Polaire & p)const {
    p.setAngle(angle);
    p.setDistance(distance);
}
Polaire::Polaire(Cartesien & c){
    //this->convertir(c);
    c.convertir(*this);
}
/* Polaire::Polaire(Polaire & p){
    //this->convertir(c);
    p.convertir(*this);
} */