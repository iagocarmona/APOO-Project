#pragma once

#include "../Usuario/usuario.h"
#include "../../Enum/enum.h"
#include "../../TAD/DataTAD/data.h"

using namespace std;

class Aluno: public Usuario{
    StatusPagamento statusPagamento;
    Data* vencimento;

    public: 
        void setStatusPagamento(StatusPagamento );
        StatusPagamento getStatusPagamento();
        void setVencimento(Data* );
        Data* getVencimento();
};