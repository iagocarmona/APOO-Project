#pragma once

#include <string>
#include "../../TAD/DataTAD/data.h"
#include "../../TAD/TelefoneTAD/telefone.h"

using namespace std;

class Pessoa {
    string cpf;
    string rg;
    string nome;
    string sobrenome;
    Data dataNascimento;
    string email;
    Telefone telefone;

    public: 
        void setCPF(string );
        string getCPF();
        void setRG(string );
        string getRG();
        void setNome(string );
        string getNome();
        void setSobrenome(string );
        string getSobrenome();
        void setDataNascimento(Data );
        Data getDataNascimento();
        void setEmail(string );
        string getEmail();
        void setTelefone(Telefone );
        Telefone getTelefone();
};