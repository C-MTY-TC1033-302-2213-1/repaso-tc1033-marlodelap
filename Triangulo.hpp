#ifndef Triangulo_hpp
#define Triangulo_hpp

#include <stdio.h>
#include "Punto.hpp"
class Triangulo {

    private:
        Punto v1,v2,v3;
    
    public:
    
    Triangulo();
    Triangulo(Punto _v1, Punto _v2, Punto _v3);

    Punto getv1();
    Punto getv2();
    Punto getv3();

    void setv1(Punto _v1);
    void setv2(Punto _v2);
    void setv3(Punto _v3);
    
    double area();
    double perimetro();
    std::string str();
};



#endif /*Triangulo_hpp*/