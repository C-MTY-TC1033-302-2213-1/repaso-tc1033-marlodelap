#include "Triangulo.hpp"    

Triangulo::Triangulo(){
    v1 = Punto (0,0);
    v2 = Punto (50,30);
    v3 = Punto (25,10);
};

Triangulo::Triangulo(Punto _v1, Punto _v2, Punto _v3){
    v1 = _v1;
    v2 = _v2;
    v3 = _v3;
};

Punto Triangulo::getv1(){
    return v1;
};
Punto Triangulo::getv2(){
    return v2;
};
Punto Triangulo::getv3(){
    return v3;
};

void Triangulo::setv1(Punto _v1){
    v1 = _v1;
};

void Triangulo::setv2(Punto _v2){  
    v2 = _v2;
};

void Triangulo::setv3(Punto _v3){
    v3 = _v3;
};



double Triangulo::area(){
    return (1.0/2) * (((v1.getx()*v2.gety()) + (v2.getx()*v3.gety()) + (v3.getx()*v1.gety())) - 
    ((v1.getx()*v3.gety())+(v3.getx()*v2.gety())+(v2.getx()*v1.gety())));
};
double Triangulo::perimetro(){
    return v1.calculaDistancia(v2) + v2.calculaDistancia(v3) + v3.calculaDistancia(v1);
};

std::string Triangulo::str(){
    return v1.str() + ',' + v2.str() + ',' + v3.str();
};