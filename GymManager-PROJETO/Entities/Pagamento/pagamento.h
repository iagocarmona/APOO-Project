#pragma once 

#include "../Aluno/aluno.h"
#include "../../TAD/DataTAD/data.h"

class Pagamento {
    int valorAPagar;
    Data dataPagamento;
    Data dataVencimento;
    Aluno* aluno;

    public:
        void setValorAPagar(int );
        int getValorAPagar();
        void setDataPagamento(Data );
        Data getDataPagamento();
        void setDataVencimento(Data );
        Data getDataVencimento();
        void setAluno(Aluno* );
        Aluno* getAluno();
};
