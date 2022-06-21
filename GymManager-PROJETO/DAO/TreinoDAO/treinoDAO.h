#pragma once

#include "../../Entities/Treino/treino.h"

class TreinoDAO {
    Treino* treino;
    Treino* treinosVector[200];

    public:
        void setTreino(Treino* treino);
        Treino* getTreino();

        bool cadastrar();
        void listar();
        bool atualizar(string campo);
        bool remover(int id);
        Treino* buscarPorId(int id);
};