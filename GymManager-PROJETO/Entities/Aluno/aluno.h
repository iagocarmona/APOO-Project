#pragma once
#include "../DAO/AlunoDAO/alunoDAO.h"
#include "../Usuario/usuario.h"
#include "../Enum/statusPagamento.h"

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