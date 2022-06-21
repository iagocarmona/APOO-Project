#pragma once 
#include <string>
#include "../Usuario/usuario.h"

using namespace std;

class Instrutor: public Usuario {
    string graduacao;

    public:
        void setGraduacao(string );
        string getGraduacao();
};