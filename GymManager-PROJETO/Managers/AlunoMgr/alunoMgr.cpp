#include "alunoMgr.h"

    AlunoMgr::AlunoMgr(AlunoDAO* alunoDAO){
        this->setAlunoDAO(alunoDAO);
    }

    void AlunoMgr::setAlunoDAO(AlunoDAO* alunoDAO){
        this->alunoDAO = alunoDAO;
    }
    AlunoDAO* AlunoMgr::getAlunoDAO(){
        return this->alunoDAO;
    }

    bool AlunoMgr::cadastrarAluno(Aluno* aluno){
        if(this->alunoDAO->cadastrar(aluno) == true){
            return true;
        }
        return false;
    }

    Aluno* AlunoMgr::filtrarAluno(string cpf){
        Aluno* novo = this->alunoDAO->buscarPorCpf(cpf);
        if(novo->getPessoa()->getCPF() == cpf){
            return novo;
        }
        return NULL;
    }

    bool AlunoMgr::alterarDadoAluno(string tipo){
        if(this->alunoDAO->atualizar(tipo) == true){
            return true;
        }
        return false;
    }

    bool AlunoMgr::removerAluno(string cpf){
        if(this->alunoDAO->remover(cpf) == true){
            return true;
        }
        return false;
    }