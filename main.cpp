#include "main.hpp"

int main( int argc, const char* argv[] ){
    std::cout << "Agente simple" << std::endl;
    std::cout << "============="<< std::endl << std::endl;
    /*Entorno entorno;
    Agente agente;
    entorno.cargar_entorno( "entorno_jardin.txt" );
    entorno.pintar_mapa();*/
    Controlador_entorno c_e;
    Entorno entorno = c_e.cargar_entorno( "entorno_jardin.txt" );
    c_e.pintar_entorno( entorno );
};
