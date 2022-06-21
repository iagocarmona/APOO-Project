#include "telefone.h"

    Telefone::Telefone(int codPais, int codCidade, int numLocal){
        this->setCodPais(codPais);
        this->setCodCidade(codCidade);
        this->setNumLocal(numLocal);
    }

    void Telefone::setCodPais(int codPais){
        this->codPais = codPais;
    }
    int Telefone::getCodPais(){
        return this->codPais;
    }
    void Telefone::setCodCidade(int codCidade){
        this->codCidade = codCidade;
    }
    int Telefone::getCodCidade(){
        return this->codCidade;
    }
    void Telefone::setNumLocal(int numLocal){
        this->numLocal = numLocal;
    }
    int Telefone::getNumLocal(){
        return this->numLocal;
    }