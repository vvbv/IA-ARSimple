#include "entorno.hpp"

Entorno::Entorno(){};
Entorno::~Entorno(){};

int Entorno::cargar_entorno(std::string ubicacion){
    //this->mapa;
};

void Entorno::pintar_mapa(){    
    for(int i = 0; i < this->mapa.size(); i++){
        for(int j = 0; j < this->mapa[i].size(); j++){
            std::cout << this->mapa[i][j];
        }
    }
}