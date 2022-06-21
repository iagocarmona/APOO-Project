#include "endereco.h"

    void Endereco::setCidade(string cidade){
        this->cidade = cidade;
    }
    string Endereco::getCidade(){
        return this->cidade;
    }
    void Endereco::setTipoEndereco(string tipoEndereco){
        this->tipoEndereco = tipoEndereco;
    }
    string Endereco::getTipoEndereco(){
        return this->tipoEndereco;
    }
    void Endereco::setDescricao(string descricao){
        this->descricao = descricao;
    }
    string Endereco::getDescricao(){
        return this->descricao;
    }
    void Endereco::setNumero(int numero){
        this->numero = numero;
    }
    int Endereco::getNumero(){
        return this->numero;
    }
    void Endereco::setLogradouro(string logradouro){
        this->logradouro = logradouro;
    }
    string Endereco::getLogradouro(){
        return this->logradouro;
    }