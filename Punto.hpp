#ifndef Punto_hpp
#define Punto_hpp

#include <stdio.h>
#include <string>
#include <math.h>

using namespace std;

class Punto {

    private: 

        double x;
        double y; 

    public: 

        //Constructor default 
        Punto();
        //Constructor parametros
        Punto(double _x,double _y);

        //Metodos de acceso, retornan un valor del atributo
        double getx();
        double gety();

        //Modifican un valor del atributo
        void setx(double _x);
        void sety(double _y);

        //Metodos 
        double calculaDistancia(Punto p2);
        string str();

};



#endif /* Punto_hpp */