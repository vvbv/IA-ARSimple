#include "main.hpp"

int main( int argc, const char* argv[] ){
    std::cout << "Agente simple" << std::endl;
    std::cout << "============="<< std::endl << std::endl;
    Entorno entorno;
    entorno.cargar_entorno( "entorno_jardin.txt" );
    entorno.pintar_mapa();
};
