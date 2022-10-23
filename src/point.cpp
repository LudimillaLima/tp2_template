#include <point.hpp>

ostream & operator<<(ostream & o, const Point & x){
    x.afficher(o);
    cout<<"prei prou"<<endl;
    return o;
}