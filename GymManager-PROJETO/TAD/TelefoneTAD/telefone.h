#pragma once 

class Telefone {
    int codPais;
    int codCidade;
    int numLocal;

    public:
        Telefone(int codPais, int codCidade, int numLocal);

        void setCodPais(int );
        int getCodPais();
        void setCodCidade(int );
        int getCodCidade();
        void setNumLocal(int );
        int getNumLocal();
};