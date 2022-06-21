#pragma once 
#include "../TAD/DataTAD/data.h"
#include "../Entities/Aluno/aluno.h"
#include "../Controllers/pagamentoController.h"

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
