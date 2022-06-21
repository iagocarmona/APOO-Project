#pragma once
#include <iostream>
#include <string>
#include "../Entities/Aluno/aluno.h"

using namespace std;

class AlunoDAO {
    Aluno* aluno;

    public:
        void setAluno(Aluno* aluno);
        Aluno* getAluno();

        bool cadastrar();
        void listar();
        bool atualizar(string tipo);
        bool remover(string cpf);
        Aluno* buscarPorCpf(string cpf);
};