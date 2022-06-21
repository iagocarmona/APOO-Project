#include "system.h"
#include <iostream>
#include <string>

using namespace std;

    void System::setAlunoMgr(AlunoMgr* alunoMgr){
        this->alunoMgr = alunoMgr;
    }
    AlunoMgr* System::getAlunoMgr(){
        return this->alunoMgr;
    }
    void System::setPagamentoMgr(PagamentoMgr* pagamentoMgr){
        this->pagamentoMgr = pagamentoMgr;
    }
    PagamentoMgr* System::getPagamentoMgr(){
        return this->pagamentoMgr;
    }
    void System::setTreinoMgr(TreinoMgr* treinoMgr){
        this->treinoMgr = treinoMgr;
    }
    TreinoMgr* System::getTreinoMgr(){
        return this->treinoMgr;
    }

    bool System::cadastrarAluno(){
        if(this->alunoMgr->cadastrarAluno() == true){
            return true;
        }
        return false;
    }

    Aluno* System::procurarAluno(string cpf){
        Aluno* novo = this->alunoMgr->filtrarAluno(cpf);
        if(novo->getPessoa()->getCPF() == cpf){
            return novo;
        }
        return NULL;
    }

    bool System::removerAluno(string cpf){
        if(this->alunoMgr->getAlunoDAO()->remover(cpf) == true){
            return true;
        }
        return false;
    }

    bool System::alterarDadoAluno(string tipo){
        if(this->alunoMgr->alterarDadoAluno(tipo) == true){
            return true;
        }
        return false;
    }

    bool System::verificarPagamento(){
        if(this->pagamentoMgr->verificarPagamento() == true){
            return true;
        }
        return false;
    }

    bool System::realizarPagamento(){
        if(this->pagamentoMgr->realizarPagamento() == true){
            return true;
        }
        return false;
    }

    bool System::cadastrarTreino(){
        if(this->treinoMgr->cadastrarTreino() == true){
            return true;
        }
        return false;
    }

    Treino* System::buscarTreino(int id){
        Treino* novo = this->treinoMgr->buscarTreino(id);
        if(novo->getId() == id) {
            return novo;
        }
        return NULL;
    }
    bool System::removerTreino(int id){
        if(this->treinoMgr->removerTreino(id) == true){
            return true;
        }
        return false;
    }