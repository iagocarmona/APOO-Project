#include "aluno.h"

    void Aluno::setStatusPagamento(StatusPagamento statusPagamento){
        this->statusPagamento = statusPagamento;
    }

    StatusPagamento Aluno::getStatusPagamento(){
        return this->statusPagamento;
    }

    void Aluno::setVencimento(string vencimento) {
        this->vencimento = vencimento;
    }

    string Aluno::getVencimento(){
        return this->vencimento;
    }
