#pragma once

#include "../Usuario/usuario.h"
#include "../../Enum/statusPagamento.h"

using namespace std;

class Aluno: public Usuario{
    StatusPagamento statusPagamento;
    string vencimento;

    public: 
        void setStatusPagamento(StatusPagamento );
        StatusPagamento getStatusPagamento();
        void setVencimento(string );
        string getVencimento();
};