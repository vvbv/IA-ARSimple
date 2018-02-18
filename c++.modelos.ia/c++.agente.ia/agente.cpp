#include "agente.hpp"

Agente::Agente(){}
Agente::~Agente(){}

void Agente::set_nombre(std::string nombre){
    this->nombre = nombre;
}

std::string Agente::get_nombre(){
    return this->nombre;
}