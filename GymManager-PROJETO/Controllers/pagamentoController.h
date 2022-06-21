#pragma once
#include "../Entities/Pagamento/pagamento.h"

class PagamentoController {
    Pagamento* pagamento;

    public:
        void setPagamento(Pagamento* pagamento);
        Pagamento* getPagamento();

        bool verificar();
        bool realizar();
};