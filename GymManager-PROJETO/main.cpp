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

// Including Aluno
#include "Entities/Aluno/aluno.h"
#include "Entities/Pessoa/pessoa.h"
#include "Entities/Usuario/usuario.h"

// Including TAD
#include "TAD/DataTAD/data.h"
#include "TAD/TelefoneTAD/telefone.h"

// Including Enum
#include "Enum/enum.h"

using namespace std;

int main(){ 

    AlunoDAO* alunoDAO;
    TreinoDAO* treinoDAO = new TreinoDAO();
    PagamentoController* pagamentoController = new PagamentoController();

    AlunoMgr* alunoMgr = new AlunoMgr(alunoDAO);
    TreinoMgr* treinoMgr = new TreinoMgr(treinoDAO);
    PagamentoMgr* pagamentoMgr = new PagamentoMgr(pagamentoController);

    System* system = new System(alunoMgr, pagamentoMgr, treinoMgr);

    Pessoa* pessoa;

    pessoa->setCPF("11800419929");
    pessoa->setRG("143807861");
    pessoa->setNome("Iago");
    pessoa->setSobrenome("Carmona");
    Data* data = new Data(25,3,2002);
    pessoa->setDataNascimento(data);
    pessoa->setEmail("iagoortegacarmona@gmail.com");
    Telefone* telefone = new Telefone(55,44,984114130);
    pessoa->setTelefone(telefone);

    Usuario* usuario = new Usuario(pessoa);

    usuario->setLogin("iago");
    usuario->setSenha("123123");

    Aluno* aluno;

    Data* dataVencimento = new Data(29,7,2022);

    aluno->setStatusPagamento(PENDENTE);
    aluno->setVencimento(dataVencimento);

    if(system->cadastrarAluno(aluno) == true){
        cout << "Aluno cadastrado com sucesso!";
    }else cout << "Ocorreu uma falha ao cadastrar aluno.";

    cout << "\n";

    return 0;
}