#pragma once

#include "../../Entities/Aluno/aluno.h"
#include "../../DAO/AlunoDAO/alunoDAO.h"

using namespace std;

class AlunoMgr {   
    AlunoDAO* alunoDAO;

    public:
        AlunoMgr(AlunoDAO* alunoDAO);

        void setAlunoDAO(AlunoDAO* );
        AlunoDAO* getAlunoDAO();

        //true: Aluno cadastrado com sucesso!
        //false: Ocorreu uma falha no cadastro...
        bool cadastrarAluno(Aluno* );

        //Em caso de sucesso é retornado um ponteiro para o aluno filtrado.
        //Em caso de falha, retorna NULL.
        Aluno* filtrarAluno(string cpf);

        //true: Informação alterada com sucesso!
        //false: Ocorreu uma falha na alteração...
        bool alterarDadoAluno(string tipo);

        //true: Aluno removido com sucesso!
        //false: Ocorreu uma falha na remoção...
        bool removerAluno(string cpf);
};  