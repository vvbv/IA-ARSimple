#include "agente.hpp"

Agente::Agente(){}
Agente::~Agente(){}

void Agente::set_nombre(std::string nombre){
    this->nombre = nombre;
}

std::string Agente::get_nombre(){
    return this->nombre;
}

void Agente::adicionar_percepcion_accion(
        std::string condicion_arriba, 
        std::string condicion_izquierda, 
        std::string condicion_abajo, 
        std::string condicion_derecha, 
        std::string condicion_objetivo, 
        std::string condicion_accion 
    ){

        int arriba, izquierda, derecha, abajo, objetivo, accion = -1;
        std::istringstream( condicion_arriba ) >> arriba;
        std::istringstream( condicion_izquierda ) >> izquierda;
        std::istringstream( condicion_abajo ) >> abajo;
        std::istringstream( condicion_derecha ) >> derecha;
        if( condicion_objetivo == "FALSE" ){
            objetivo = 0;
        }else if( condicion_objetivo == "TRUE" ){
            objetivo = 1;
        }

        /* A = Arriba = 0
           X = Abajo = 1
           I = Izquierda = 2
           D = Derecha = 3
           F = Finaliza = 4
           H = Ahogado = 5 => Muerto 
        */
        if( condicion_accion == "A" ){
            accion = 0;
        }else if( condicion_accion == "X" ){
            accion = 1;
        }else if( condicion_accion == "I" ){
            accion = 2;
        }else if( condicion_accion == "D" ){
            accion = 3;
        }else if( condicion_accion == "F" ){
            accion = 4;
        }else if( condicion_accion == "H" ){
            accion = 5;
        }
        
        this->percepciones_acciones[arriba][izquierda][abajo][derecha][objetivo][accion] = "x";
        std::cout << this->percepciones_acciones[0][0][0][0][0][0] << std::endl;
}

std::map < int, std::map < int, std::map< int, std::map< int, std::map< int, std::map< int, std::string > > > > > > Agente::get_percepciones(){
    return this->percepciones_acciones;
};