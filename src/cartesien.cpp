#include <cartesien.hpp>
#include <polaire.hpp>
#include <cmath>

Cartesien::Cartesien(double x, double y):x(x),y(y){

}
Cartesien::Cartesien():Cartesien(0.0,0.0){

}
double Cartesien::getX() const{
    return x;
}
double Cartesien::getY() const{
    return y;
}
void Cartesien::setX(double x){
    this->x=x;
}
void Cartesien::setY(double y){
    this->y=y;
}
/*ostream & operator<<(ostream & o, const Cartesien  & x){
    o<<"(x="<<x.getX()<<";y="<<x.getY()<<")";
    return o;
}*/
void Cartesien::afficher(ostream & o)const{
    o<<"(x="<<getX()<<";y="<<getY()<<")";
}

void Cartesien::convertir(Polaire & p)const{
   p.setAngle(atan(y/x)*180/PI);
   p.setDistance(sqrt(x*x+y*y));
   
}
void Cartesien::convertir(Cartesien & c)const{
   c.setX(x);
   c.setY(y);
}
Cartesien::Cartesien(Polaire &p){
    //this->convertir(p);
    p.convertir(*this);
}