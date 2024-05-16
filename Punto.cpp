#include "Punto.hpp"


//Constructor default 
Punto::Punto(){
    x = 0;
    y = 0;
};
//Constructor parametros
Punto::Punto(double _x,double _y){
    x = _x;
    y = _y;
};


//Metodos de acceso, retornan un valor del atributo
double Punto::getx(){
return x;
};
double Punto::gety(){
return y; 
};

//Modifican un valor del atributo
void Punto::setx(double _x){
    x = _x;
   
};
void Punto::sety(double _y){
    y = _y;
};

//Metodos 

double Punto::calculaDistancia(Punto p2){
    return sqrt((p2.x - x)*(p2.x - x)+(p2.y - y)*(p2.y - y));
};
string Punto::str(){
    return '(' + std::to_string(x) + ',' + std::to_string(y) + ')';
};
