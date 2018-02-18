#ifndef CONTROLADOR_GENERAL_HPP_
#define CONTROLADOR_GENERAL_HPP_

    #include "controlador_entorno.cpp"
    #include "controlador_agente.cpp"

    class Controlador_general{
        private:
            Entorno entorno;
            Agente agente;
            Controlador_entorno c_entorno;
            Controlador_agente c_agente;

        public:
            Controlador_general( std::string ubicacion_entorno, std::string ubicacion_agente );
            ~Controlador_general();
            Controlador_entorno get_controlador_entorno();
    };

#endif