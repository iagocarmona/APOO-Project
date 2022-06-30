#include "treinoDAO.h"

    void TreinoDAO::setTreino(Treino* treino){
        this->treino = treino;
    }
    Treino* TreinoDAO::getTreino(){
        return this->treino;
    }

    bool TreinoDAO::cadastrar(){
        return false;
    }
    void TreinoDAO::listar(){

    }
    bool TreinoDAO::atualizar(string campo){
        return false;
    }
    bool TreinoDAO::remover(int id){
        return false;
    }
    Treino* TreinoDAO::buscarPorId(int id){
        return NULL;
    } 