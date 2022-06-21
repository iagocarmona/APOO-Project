

#include <iostream>

// Including my System
#include "System/system.h"

// Including Managers
#include "Managers/AlunoMgr/alunoMgr.h"
#include "Managers/PagamentoMgr/pagamentoMgr.h"
#include "Managers/TreinoMgr/treinoMgr.h"

// Including DAOs
#include "DAO/AlunoDAO/alunoDAO.h"
#include "DAO/TreinoDAO/treinoDAO.h"

// Including Controller
#include "Controllers/pagamentoController.h"

using namespace std;

int main(){ 

    cout << "=============================\n";
    cout << "|        Gym System         |\n"; 
    cout << "=============================\n";

    AlunoDAO* alunoDAO = new AlunoDAO();
    TreinoDAO* treinoDAO = new TreinoDAO();
    PagamentoController* pagamentoController = new PagamentoController();

    AlunoMgr* alunoMgr = new AlunoMgr(alunoDAO);
    TreinoMgr* treinoMgr = new TreinoMgr(treinoDAO);
    PagamentoMgr* pagamentoMgr = new PagamentoMgr(pagamentoController);

    System* system = new System(alunoMgr, pagamentoMgr, treinoMgr);

    if(system->cadastrarAluno()){
        cout << "Aluno cadastrado com sucesso!";
    }else {
        cout << "Ocorreu uma falha no cadastro!";
    }

    cout << "\n";

    return 0;
}