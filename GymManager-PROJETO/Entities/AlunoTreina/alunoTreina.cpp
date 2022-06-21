#include "alunoTreina.h"

    void AlunoTreina::setTipoTreino(TipoTreino tipoTreino){
        this->tipoTreino = tipoTreino;
    }
    TipoTreino AlunoTreina::getTipoTreino(){
        return this->tipoTreino;
    }
    void AlunoTreina::setAluno(Aluno* aluno){
        this->aluno = aluno;
    }
    Aluno* AlunoTreina::getAluno(){
        return this->aluno;
    }
    void AlunoTreina::setTreino(Treino* treino){
        this->treino = treino;
    }
    Treino* AlunoTreina::getTreino(){
        return this->treino;
    }