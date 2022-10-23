#include <point.hpp>

ostream & operator<<(ostream & o, const Point & x){
    x.afficher(o);
    return o;
}