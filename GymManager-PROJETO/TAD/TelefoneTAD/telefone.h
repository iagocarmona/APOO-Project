#pragma once 

class Telefone {
    int codPais;
    int codCidade;
    int numLocal;

    public:
        void setCodPais(int );
        int getCodPais();
        void setCodCidade(int );
        int getCodCidade();
        void setNumLocal(int );
        int getNumLocal();
};