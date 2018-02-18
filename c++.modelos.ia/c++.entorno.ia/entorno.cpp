#include "entorno.hpp"

Entorno::Entorno(){
    this->posicion_inicial = new int[2]();
};
Entorno::~Entorno(){};

void Entorno::set_mapa( std::vector< std::vector< std::string > > mapa ){
    this->mapa = mapa;
}

void Entorno::set_posicion_inicial( int *posicion_inicial ){
    this->posicion_inicial = posicion_inicial;
}

std::vector< std::vector< std::string > > Entorno::get_mapa(){
    return this->mapa;
}

int Entorno::get_posicion_inicial(){
    return *this->posicion_inicial;
}