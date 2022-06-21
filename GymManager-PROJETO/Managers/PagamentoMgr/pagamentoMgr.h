#pragma once

#include "../../Controllers/pagamentoController.h"

class PagamentoMgr {
    PagamentoController* pagamentoController;

    public:
        PagamentoMgr(PagamentoController* pagamentoController);

        void setPagamentoController(PagamentoController* );
        PagamentoController* getPagamentoController();

        //true: Pagamento verificado com sucesso!
        //false: Ocorreu uma falha na verificação...
        bool verificarPagamento();

        //true: Pagamento realizado com sucesso!
        //false: Ocorreu uma falha na realização...
        bool realizarPagamento();
};