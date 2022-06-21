#include "treinoMgr.h"

    void TreinoMgr::setTreinoDAO(TreinoDAO* treinoDAO){
        this->treinoDAO = treinoDAO;
    }
    TreinoDAO* TreinoMgr::getTreinoDAO(){
        return this->treinoDAO;
    }

    bool TreinoMgr::cadastrarTreino(){
        if(this->treinoDAO->cadastrar() == true){
            return true;
        }
        return false;
    }

    Treino* TreinoMgr::buscarTreino(int id){
        Treino* novo = this->treinoDAO->buscarPorId(id);
        if(novo->getId() == id){
            return novo;
        }
        return NULL;
    }

    bool TreinoMgr::atualizarTreino(string campo){
        if(this->treinoDAO->atualizar(campo) == true){
            return true;
        }
        return false;
    }
    
    bool TreinoMgr::removerTreino(int id){
        if(this->treinoDAO->remover(id) == true){
            return true;
        }
        return false;
    }