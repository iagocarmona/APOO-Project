#include <stdio.h>
#include <string.h>
#include "alunoDAO.h"
#include "../../Entities/Aluno/aluno.h"
#include "../../TAD/DataTAD/data.h"

using namespace std;

    AlunoDAO::AlunoDAO(){
        this->alunoCounter = 0;
        memset(this->alunosVector, 0, sizeof(this->alunosVector));
    }

    void AlunoDAO::setAluno(Aluno* aluno){
        this->aluno = aluno;
    }
    Aluno* AlunoDAO::getAluno(){
        return this->aluno;
    }

    bool AlunoDAO::cadastrar(Aluno* aluno){
        this->alunosVector[this->alunoCounter] = aluno;
        this->alunoCounter++;
        return true;
    }
    void AlunoDAO::listar(){
        for(int i = 0; i < this->alunoCounter; i++){
            cout << "Nome: " << this->alunosVector[i]->getPessoa()->getNome();
            cout << this->alunosVector[i]->getPessoa()->getSobrenome() << "\n";
            cout << "CPF: " << this->alunosVector[i]->getPessoa()->getCPF() << "\n";
            cout << "RG: " << this->alunosVector[i]->getPessoa()->getRG() << "\n";  
            cout << "email: " << this->alunosVector[i]->getPessoa()->getEmail() << "\n";  
            cout << "telefone: " << this->alunosVector[i]->getPessoa()->getTelefone() << "\n";
        }
    }
    bool AlunoDAO::atualizar(string tipo){
        
        return false;
    }
    bool AlunoDAO::remover(string cpf){

        return false;
    }
    Aluno* AlunoDAO::buscarPorCpf(string cpf){

        return NULL;
    }