#include "controlador_general.hpp"

Controlador_general::Controlador_general( std::string ubicacion_entorno, std::string ubicacion_agente ){
    this->entorno = c_entorno.cargar_entorno( ubicacion_entorno );
}
Controlador_general::~Controlador_general(){}
Controlador_entorno Controlador_general::get_controlador_entorno(){
    Controlador_entorno c_e( this->entorno );
    return c_e;
}