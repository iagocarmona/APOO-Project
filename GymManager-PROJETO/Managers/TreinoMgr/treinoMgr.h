#pragma once

#include "../../Entities/Treino/treino.h"
#include "../../DAO/TreinoDAO/treinoDAO.h"


class TreinoMgr {
    TreinoDAO* treinoDAO;

    public:
        TreinoMgr(TreinoDAO* treinoDAO);

        void setTreinoDAO(TreinoDAO* );
        TreinoDAO* getTreinoDAO();

        //true: Treino cadastrado com sucesso!
        //false: Ocorreu uma falha no cadastro...
        bool cadastrarTreino();

        //Em caso de sucesso é retornado um ponteiro para o treino buscado.
        //Em caso de falha, retorna NULL.
        Treino* buscarTreino(int id);

        //true: Treino atualizado com sucesso!
        //false: Ocorreu uma falha na atualização...
        bool atualizarTreino(string campo);

        //true: Treino removido com sucesso!
        //false: Ocorreu uma falha na remoção...
        bool removerTreino(int id);
};