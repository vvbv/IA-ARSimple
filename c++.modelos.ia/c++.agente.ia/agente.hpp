#ifndef AGENTE_HPP_
#define AGENTE_HPP_

    #include <string>

    class Agente{
        private:
            std::string nombre;
        public:
            Agente();
            ~Agente();
            void set_nombre(std::string nombre);
            std::string get_nombre();
    };

#endif