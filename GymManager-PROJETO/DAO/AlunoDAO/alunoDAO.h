#pragma once
#include <iostream>
#include <string>
#include "../../Entities/Aluno/aluno.h"

using namespace std;

class AlunoDAO {
    Aluno* aluno;
    Aluno** alunosVector;
    int alunoCounter;

    public:
        AlunoDAO();

        void setAluno(Aluno* aluno);
        Aluno* getAluno();

        bool cadastrar(Aluno* );
        void listar();
        bool atualizar(string tipo);
        bool remover(string cpf);
        Aluno* buscarPorCpf(string cpf);
};