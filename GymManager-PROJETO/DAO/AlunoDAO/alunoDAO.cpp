#include <stdio.h>
#include <string.h>
#include "alunoDAO.h"
#include "../../Entities/Aluno/aluno.h"
#include "../../TAD/DataTAD/data.h"

using namespace std;

    AlunoDAO::AlunoDAO(){
        this->alunoCounter = 0;
        memset(this->alunosVector, NULL, 200);
    }

    void AlunoDAO::setAluno(Aluno* aluno){
        this->aluno = aluno;
    }
    Aluno* AlunoDAO::getAluno(){
        return this->aluno;
    }

    bool AlunoDAO::cadastrar(){
        Aluno novo;
        cout << "Cadastrar aluno: \n";

        cout << "-\n";
        cout << "Informe o primeiro nome do aluno: ";
        string nome;
        cin >> nome;
        cout << nome << " ";
        novo.getPessoa()->setNome(nome);

        cout << "\n-\n";
        cout << "Informe o sobrenome do aluno: ";
        string sobrenome;
        cin >> sobrenome;
        novo.getPessoa()->setSobrenome(sobrenome);

        cout << "\n-\n";
        cout << "Informe o cpf do aluno: ";
        string cpf;
        cin >> cpf; 
        novo.getPessoa()->setCPF(cpf);

        cout << "\n-\n";
        cout << "Informe o rg do aluno: ";
        string rg;
        cin >> rg; 
        novo.getPessoa()->setRG(rg);

        cout << "\n-\n";
        cout << "Informe a data de nascimento do aluno: \n";
        cout << "dia: ";
        int dia;
        cin >> dia;
        cout << "\nmês: ";
        int mes;
        cin >> mes;
        cout << "\nano: ";
        int ano;
        cin >> ano;
        Data* dataNascimento = new Data(dia, mes, ano);
        novo.getPessoa()->setDataNascimento(dataNascimento);

        cout << "\n-\n";
        cout << "Informe o email do aluno: \n";
        string email;
        cin >> email;
        novo.getPessoa()->setEmail(email);

        cout << "\n-\n";
        cout << "Informe o telefone do aluno: \n";
        cout << "codigo pais: ";
        int codPais;
        cin >> codPais;
        cout << "\ncodigo cidade: ";
        int codCidade;
        cin >> codCidade;
        cout << "\nnumero: ";
        int numero;
        cin >> numero;
        Telefone* telefone = new Telefone(codPais, codCidade, numero);
        novo.getPessoa()->setTelefone(telefone);

        this->alunosVector[this->alunoCounter] = novo;
        this->alunoCounter++;

        return true;
    }
    void AlunoDAO::listar(){
        for(int i = 0; i < this->alunoCounter; i++){
            cout << "Nome: " << this->alunosVector[i].getPessoa()->getNome();
            cout << this->alunosVector[i].getPessoa()->getSobrenome() << "\n";
            cout << "CPF: " << this->alunosVector[i].getPessoa()->getCPF() << "\n";
            cout << "RG: " << this->alunosVector[i].getPessoa()->getRG() << "\n";  
            cout << "RG: " << this->alunosVector[i].getPessoa()->getEmail() << "\n";  
        }
    }
    bool AlunoDAO::atualizar(string tipo){

    }
    bool AlunoDAO::remover(string cpf){

    }
    Aluno* AlunoDAO::buscarPorCpf(string cpf){

    }