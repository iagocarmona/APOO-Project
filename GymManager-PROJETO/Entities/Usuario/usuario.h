#pragma once 
#include <string>
#include "../Pessoa/pessoa.h"

using namespace std;

class Usuario {
    Pessoa* pessoa;
    string login;
    string senha;

    public:
        void setPessoa(Pessoa* );
        Pessoa* getPessoa();
        void setLogin(string );
        string getLogin();
        void setSenha(string );
        string getSenha();
};