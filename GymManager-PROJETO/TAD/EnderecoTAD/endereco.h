#pragma once
#include <iostream>

using namespace std;

class Endereco {
    string cidade;
    string tipoEndereco;
    string descricao;
    int numero;
    string logradouro;

    public:
        void setCidade(string );
        string getCidade();
        void setTipoEndereco(string );
        string getTipoEndereco();
        void setDescricao(string );
        string getDescricao();
        void setNumero(int );
        int getNumero();
        void setLogradouro(string );
        string getLogradouro();
};
