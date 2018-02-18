#include "controlador_entorno.hpp"

Controlador_entorno::Controlador_entorno(){}
Controlador_entorno::~Controlador_entorno(){}
Entorno Controlador_entorno::cargar_entorno( std::string ubicacion ){

    std::vector< std::vector< std::string > > mapa; //2D
    std::vector< std::vector< std::vector< std::string > > > mapa3D; // [No implementado]
    int *posicion_inicial = new int[2]();

    std::vector < std::string > lineas;
    std::ifstream flujo_entrada( ubicacion.c_str() );
    std::string linea = "";

    while( std::getline( flujo_entrada, linea ) ){
        if( linea[0] == 'F' ){
            lineas.push_back( linea );
        }
    }

    flujo_entrada.close();

    std::vector < std::vector < std::string > > mapa_tmp;
    int *posicion_inicial_tmp = new int[2]();

    for(int i = 0; i < lineas.size(); i++){

        std::stringstream ss_linea_mapa( lineas[i] );
        std::vector < std::string > substrings_definicion_mapa;
        std::string substring = "";

        substrings_definicion_mapa.push_back( "1" ); // Lado izquierdo de la frontera
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
                    posicion_inicial_tmp[0] = ( i + 1 );
                    posicion_inicial_tmp[1] = ( substrings_definicion_mapa.size() - 1 );
                }else if( substring == "M" ){
                    substrings_definicion_mapa.push_back( substring );
                }
            }
        }
        substrings_definicion_mapa.push_back( "1" ); // Lado derecho de la frontera
        mapa_tmp.push_back( substrings_definicion_mapa );
    }

    // Frontera superior
    std::vector < std::string > frontera_superior_inferior;
    for(int i = 0; i < mapa_tmp[0].size(); i++){
        frontera_superior_inferior.push_back( "1" );
    }
    mapa.push_back( frontera_superior_inferior );
    for(int i = 0; i < mapa_tmp.size(); i++){
        mapa.push_back( mapa_tmp[i] );
    }
    // Frontera inferior
    mapa.push_back( frontera_superior_inferior );
    posicion_inicial = posicion_inicial_tmp;

    Entorno entorno;
    entorno.set_mapa( mapa );
    entorno.set_posicion_inicial( posicion_inicial );

    return entorno;
}

void Controlador_entorno::pintar_entorno( Entorno entorno ){    
    int *posicion_inicial = new int[2]();
    *posicion_inicial = entorno.get_posicion_inicial();
    std::cout << "Punto de partida: Fila => " << ( posicion_inicial[0] + 1 ); 
    std::cout << " :: Columna => " << posicion_inicial[1] << std::endl << std::endl;
    for(int i = 0; i < entorno.get_mapa().size(); i++){
        for(int j = 0; j < entorno.get_mapa()[i].size(); j++){
            std::cout << '|' << entorno.get_mapa()[i][j];
            if( j == ( entorno.get_mapa()[i].size() - 1 ) ){
                std::cout << '|' << std::endl;;
            }
        }
    }
}