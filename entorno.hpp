#ifndef ENTORNO_HPP_
#define ENTORNO_HPP_

    #include <iostream>
    #include <fstream>
    #include <string>
    #include <vector>
    #include <sstream>

    class Entorno{

        private:

            std::vector< std::vector< std::string > > mapa;

        public:
            Entorno();
            ~Entorno();
            int cargar_entorno(std::string ubicacion);
            void pintar_mapa();

    };

#endif