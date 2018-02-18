#include "controlador_general.hpp"

Controlador_general::Controlador_general( std::string ubicacion_entorno, std::string ubicacion_agente ){
    this->entorno = this->c_entorno.cargar_entorno( ubicacion_entorno );
    this->agente = this->c_agente.cargar_agente( ubicacion_agente );
}
Controlador_general::~Controlador_general(){}
Controlador_entorno Controlador_general::get_controlador_entorno(){
    Controlador_entorno c_e( this->entorno );
    return c_e;
}
Controlador_agente Controlador_general::get_controlador_agente(){
    Controlador_agente c_a( this->agente );
    return c_a;
}

Entorno Controlador_general::get_entorno(){
    return this->entorno;
};
Agente Controlador_general::get_agente(){
    return this->agente;
};
void Controlador_general::set_entorno( Entorno entorno ){
    this->entorno = entorno;
};
void Controlador_general::set_agente( Agente agente ){
    this->agente = agente;
};