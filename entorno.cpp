#include "entorno.hpp"

Entorno::Entorno(){};
Entorno::~Entorno(){};

int Entorno::cargar_entorno(std::string ubicacion){

    std::vector < std::string > lineas;
    std::ifstream flujo_entrada( ubicacion.c_str() );
    std::string linea = "";

    while( std::getline( flujo_entrada, linea ) ){
        if( linea[0] == 'F' ){
            lineas.push_back( linea );
        }
    }

    flujo_entrada.close();

    for(int i = 0; i < lineas.size(); i++){

        std::stringstream ss_linea_mapa( lineas[i] );
        std::vector < std::string > substrings_definicion_mapa;
        std::string substring = "";
        while( ss_linea_mapa >> substring ){
            if( substring.length() > 1 ){
                if( substring[0] == 'X' ){
                    substrings_definicion_mapa.push_back( substring );
                }
            }else{
                if( substring == "0" ){
                     substrings_definicion_mapa.push_back( substring );
                }else if( substring == "1" ){
                    substrings_definicion_mapa.push_back( substring );
                }else if( substring == "S" ){
                    substrings_definicion_mapa.push_back( substring );
                }else if( substring == "M" ){
                    substrings_definicion_mapa.push_back( substring );
                }
            }
        }
        this->mapa.push_back( substrings_definicion_mapa );
    }
};

void Entorno::pintar_mapa(){    
    for(int i = 0; i < this->mapa.size(); i++){
        for(int j = 0; j < this->mapa[i].size(); j++){
            std::cout << '|' << this->mapa[i][j];
            if( j == ( this->mapa[i].size() - 1 ) ){
                std::cout << '|' << std::endl;;
            }
        }
    }
}