#include "usuario.h"

    void Usuario::setPessoa(Pessoa* pessoa){
        this->pessoa = pessoa;
    }
    Pessoa* Usuario::getPessoa() {
        return this->pessoa;
    }
    void Usuario::setLogin(string login){
        this->login = login;
    }
    string Usuario::getLogin(){
        return this->login;
    }
    void Usuario::setSenha(string senha){
        this->senha = senha;
    }
    string Usuario::getSenha(){
        return this->senha;
    }