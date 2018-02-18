#ifndef ENTORNO_HPP_
#define ENTORNO_HPP_

    #include <iostream>
    #include <string>
    #include <vector>

    class Entorno{

        private:

            std::vector< std::vector< int > > mapa;

        public:
            Entorno();
            ~Entorno();
            int cargar_entorno(std::string ubicacion);
            void pintar_mapa();

    };

#endif