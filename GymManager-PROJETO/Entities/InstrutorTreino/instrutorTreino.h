#pragma once
#include <string>
#include "../Treino/treino.h"
#include "../Instrutor/instrutor.h"

using namespace std;

class InstrutorTreino {
    string horaInicio;
    string horaFim;
    Treino* treino;
    Instrutor* instrutor;

    public:
        void setHoraInicio(string );
        string getHoraInicio();
        void setHoraFim(string );
        string getHoraFim();

        void setTreino(Treino* );
        Treino* getTreino();
        void setInstrutor(Instrutor* );
        Instrutor* getInstrutor();
};