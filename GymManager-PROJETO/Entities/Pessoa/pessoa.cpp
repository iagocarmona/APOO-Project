    #include "pessoa.h"

    void Pessoa::setCPF(string cpf){
        this->cpf = cpf;
    }
    string Pessoa::getCPF(){
        return this->cpf;
    }
    void Pessoa::setRG(string rg){
        this->rg = rg;
    }
    string Pessoa::getRG(){
        return this->rg;
    }
    void Pessoa::setNome(string nome){
        this->nome = nome;
    }
    string Pessoa::getNome(){
        return this->nome;
    }
    void Pessoa::setSobrenome(string sobrenome){
        this->sobrenome = sobrenome;
    }
    string Pessoa::getSobrenome(){
        return this->sobrenome;
    }
    void Pessoa::setDataNascimento(Data* dataNascimento){
        this->dataNascimento = *dataNascimento;
    }
    Data Pessoa::getDataNascimento(){
        return this->dataNascimento;
    }
    void Pessoa::setEmail(string email){
        this->email = email;
    }
    string Pessoa::getEmail(){
        return this->email;
    }
    void Pessoa::setTelefone(Telefone* telefone){
        this->telefone = *telefone;
    }
    Telefone Pessoa::getTelefone(){
        return this->telefone;
    }