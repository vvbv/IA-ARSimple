#include "main.hpp"

int main( int argc, const char* argv[] ){

    std::cout << "Agente simple" << std::endl;
    std::cout << "============="<< std::endl << std::endl;
    Controlador_general c_general( "entorno_jardin.txt", "agente_percepcion_accion.txt" );
    c_general.get_controlador_entorno().pintar_entorno();
    std::cout << std::endl;
    c_general.get_controlador_agente().pintar_agente();

   std::cout << c_general.get_agente().get_percepciones()[0][0][0][0][0][0] << std::endl;

    

};
