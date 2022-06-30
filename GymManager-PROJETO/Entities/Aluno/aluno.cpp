#include "aluno.h"

    void Aluno::setStatusPagamento(StatusPagamento statusPagamento){
        this->statusPagamento = statusPagamento;
    }

    StatusPagamento Aluno::getStatusPagamento(){
        return this->statusPagamento;
    }

    void Aluno::setVencimento(Data* vencimento) {
        this->vencimento = vencimento;
    }

    Data* Aluno::getVencimento(){
        return this->vencimento;
    }
