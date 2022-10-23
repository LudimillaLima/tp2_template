#ifndef Nuage_TP2
#define Nuage_TP2

#include "point.hpp"
#include <vector>


using namespace std;

template <typename T>
class Nuage{
    public:
    //vetor de Ponteiro para pontos somente: se a gente tem um Polaire, é um ponto, se a gente tem um cartesien, é um ponto...
    std::vector<T> vec;
    

    //foi chato de achar isso aqui, mas pra declarar um const iterator foi isso
    using const_iterator = typename vector<T>::const_iterator;
    using iterator = typename vector<T>::iterator;

    void ajouter(const T &c){
        vec.push_back(c);
    }
    int size(){
        return vec.size();
    }
    //declarar uma funcao begin e end simples, que retorna o begin e end do vector
    typename std::vector<T>::iterator begin(){
        return vec.begin();
    }
    typename std::vector<T>::iterator  end(){
        return vec.end();
    }

};

template <typename T>
T barycentre_v1(const Nuage<T> & n){
    double x = 0;
    double y = 0;  
    //nao to sabendo mexer nesse trem de template, tbm n sei ao certo qual lugar fica o barycentre
    for (int i = 0; i < n.vec.size(); i++)
    {
       Cartesien c(*static_cast<Cartesien *>(n.vec[i]));
        x += c.getX();
        y += c.getY();
    }
    
    x = x/Nuage T::size();
    y = y/(n.size());

    Cartesien b(x,y);
    return b;
    
}


/*
class BarycentreCartesien{
    public:
        BarycentreCartesien(){};
        virtual Cartesien operator()(Nuage &n) {
            double x = 0;
            double y = 0;  
            for (int i = 0; i < n.vec.size(); i++)
            {
                Cartesien c(*static_cast<Cartesien *>(n.vec[i]));
                x += c.getX();
                y += c.getY();
            }
            x = x/n.size();
            y = y/n.size();
        BarycentrePolaire(){};
        virtual Polaire operator()(Nuage &n) {
            double x = 0;
            double y = 0;  
            for (int i = 0; i < n.vec.size(); i++)
            {
                Cartesien c(*static_cast<Cartesien *>(n.vec[i]));
                x += c.getX();
                y += c.getY();
            }
            x = x/n.size();
            y = y/n.size();

            Cartesien b(x,y);
            Polaire p(b);
            return p;
        }
};class BarycentrePolaire{
    public:
        BarycentrePolaire(){};
        virtual Polaire operator()(Nuage &n) {
            double x = 0;
            double y = 0;  
            for (int i = 0; i < n.vec.size(); i++)
            {
                Cartesien c(*static_cast<Cartesien *>(n.vec[i]));
                x += c.getX();
                y += c.getY();
            }
            x = x/n.size();
            y = y/n.size();

            Cartesien b(x,y);
            Polaire p(b);
            return p;
        }
};*/




#endif