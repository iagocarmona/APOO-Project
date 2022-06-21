#pragma once

#include <string>
#include "../Aluno/aluno.h"
#include "../Treino/treino.h"
#include "../../Enum/tipoTreino.h"

using namespace std;

class AlunoTreina {
    TipoTreino tipoTreino;
    Aluno* aluno;
    Treino* treino;

    public:
        void setTipoTreino(TipoTreino );
        TipoTreino getTipoTreino();
        void setAluno(Aluno* );
        Aluno* getAluno();
        void setTreino(Treino* );
        Treino* getTreino();
};