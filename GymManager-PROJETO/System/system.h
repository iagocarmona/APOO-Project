#pragma once
#include "../Entities/Aluno/aluno.h"
#include "../Entities/Treino/treino.h"
#include "../Managers/AlunoMgr/alunoMgr.h"
#include "../Managers/PagamentoMgr/pagamentoMgr.h"
#include "../Managers/TreinoMgr/treinoMgr.h"

class System {
    AlunoMgr* alunoMgr;
    PagamentoMgr* pagamentoMgr;
    TreinoMgr* treinoMgr;

    public:
        void setAlunoMgr(AlunoMgr* );
        AlunoMgr* getAlunoMgr();
        void setPagamentoMgr(PagamentoMgr* );
        PagamentoMgr* getPagamentoMgr();
        void setTreinoMgr(TreinoMgr* );
        TreinoMgr* getTreinoMgr();
            
        // true: Aluno cadastrado com sucesso!
        // false: Ocorreu uma falha no cadastro...
        bool cadastrarAluno();

        // Em caso de sucesso retorna um ponteiro para o aluno procurado.
        // Em caso de falha, retorna NULL.
        Aluno* procurarAluno(string cpf);

        // true: Aluno removido com sucesso!
        // false: Ocorreu uma falha na remoção...
        bool removerAluno(string cpf);

        // true: Dado do aluno alterado com sucesso!
        // false: Ocorreu uma falha na alteração...
        bool alterarDadoAluno(string tipo);

        // true: Pagamento verificado com sucesso!
        // false: Ocorreu uma falha na verificação...
        bool verificarPagamento();

        // true: Pagamento realizado com sucesso!
        // false: Ocorreu uma falha na realização...
        bool realizarPagamento();

        // true: Treino cadastrado com sucesso!
        // false: Ocorreu uma falha no cadastro...
        bool cadastrarTreino();

        // Em caso de sucesso retorna um ponteiro para o treino buscado.
        // Em caso de falha, retorna NULL.
        Treino* buscarTreino(int id);

        // true: Treino removido com sucesso!
        // false: Ocorreu uma falha na remoção...
        bool removerTreino(int id);
};