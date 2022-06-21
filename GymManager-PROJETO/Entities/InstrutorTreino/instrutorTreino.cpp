#include "instrutorTreino.h"

    void InstrutorTreino::setHoraInicio(string horaInicio){
        this->horaInicio = horaInicio;
    }
    string InstrutorTreino::getHoraInicio(){
        return this->horaInicio;
    }   
    void InstrutorTreino::setHoraFim(string horaFim){
        this->horaFim = horaFim;
    }
    string InstrutorTreino::getHoraFim(){
        return this->horaFim;
    }

    void InstrutorTreino::setTreino(Treino* treino){
        this->treino = treino;
    }
    Treino* InstrutorTreino::getTreino(){
        return this->treino;
    }
    void InstrutorTreino::setInstrutor(Instrutor* instrutor){
        this->instrutor = instrutor;
    }
    Instrutor* InstrutorTreino::getInstrutor(){
        return this->instrutor;
    }