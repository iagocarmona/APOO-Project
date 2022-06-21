#include "pagamentoMgr.h"

    void PagamentoMgr::setPagamentoController(PagamentoController* pagamentoController){
        this->pagamentoController = pagamentoController;
    }
    PagamentoController* PagamentoMgr::getPagamentoController(){
        return this->pagamentoController;
    }

    bool PagamentoMgr::verificarPagamento(){
        if(this->pagamentoController->verificar() == true){
            return true;
        }
        return false;
    }

    bool PagamentoMgr::realizarPagamento(){
        if(this->pagamentoController->realizar() == true){
            return true;
        }
        return false;
    }